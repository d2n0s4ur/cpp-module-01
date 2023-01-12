/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:49:38 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 15:52:50 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "string    addr : " << &string << std::endl;
	std::cout << "stringPTR addr : " << stringPTR << std::endl;
	std::cout << "stringREF addr : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string    value: " << string << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF vaule: " << stringREF << std::endl;
	return (0);
}