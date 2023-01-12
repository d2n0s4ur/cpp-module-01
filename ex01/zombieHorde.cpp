/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:19:39 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 15:25:00 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	ret = new Zombie[N];
	int		i;

	i = 0 ;
	while (i < N)
	{
		ret[i].setName(name);
		i ++;
	}
	return (ret);
}
