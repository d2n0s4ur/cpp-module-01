/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:21:46 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 16:40:28 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name_;
		Weapon		*weapon_;
	public:
		HumanB( std::string name );
		~HumanB();
		void	setWeapon( Weapon &weapon );
		void	attack( void );
};

#endif