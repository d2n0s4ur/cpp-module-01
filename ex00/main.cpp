/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:04:48 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 15:11:03 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie* heapZombie = newZombie("Heap Zombie");
	Zombie stackZombie("Stack Zombie1");
	
	stackZombie.announce();
	heapZombie->announce();
	randomChump("randomChump Zombie");
	delete heapZombie;
	return (0);
}
