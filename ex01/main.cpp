/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:04:48 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 15:22:13 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define N 10

int	main( void )
{
	Zombie* horde = zombieHorde(N, "Horde Zombie");
	int	i;

	i = 0;
	while( i < N)
	{
		horde[i].announce();
		i ++;
	}
	delete [] horde;
	return (0);
}
