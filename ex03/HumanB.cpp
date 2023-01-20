/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:23:14 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/20 17:28:47 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name  )
{
	this->name_ = name;
	this->weapon_ = 0;
}

HumanB::~HumanB()
{
	std::cout << "HumanB [" << this->name_ << "] is destroyed" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon_ = &weapon;
}

void	HumanB::attack( void )
{
	if (this->weapon_)
		std::cout << this->name_ << " attacks with their " << this->weapon_->getType() << std::endl;
	else
		std::cout << this->name_ << " attacks with their " << "empty hands" << std::endl;
}
