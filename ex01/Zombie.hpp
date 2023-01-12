/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:55:09 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 15:24:32 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif
