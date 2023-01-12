/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:01:12 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 17:29:20 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	ft_openfile(std::ifstream &input, std::ofstream &output, std::string filename)
{
	input.open(filename, std::ifstream::in);
	output.open(filename.append(".replace"), std::ofstream::out | std::ofstream::trunc);
	if (input.fail() || output.fail())
	{
		std::cout << "Error: File open" << std::endl;
		return (1);
	}
	return (0);
}

void	ft_copyfile(std::ifstream &input, std::string &content)
{
	char		c;

	while (input.get(c))
		content += c;
}

void	ft_replace(std::string &content, std::string &s1, std::string &s2)
{
	std::size_t	loc;
	while (1)
	{
		loc = content.find(s1);
		if (loc == std::string::npos)
			break ;
		content.erase(loc, s1.length());
		content.insert(loc, s2);
	}
}

int	main(int argc, char *argv[])
{
	std::ifstream	infile; 
	std::ofstream	outfile;
	std::string		content;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (ft_openfile(infile, outfile, argv[1]))
		return (1);
	ft_copyfile(infile, content);
	ft_replace(content, s1, s2);
	outfile << content;
	infile.close();
	outfile.close();
	return (0);
}
