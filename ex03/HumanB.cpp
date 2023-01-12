/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:23:14 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 16:41:01 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name  )
{
	this->name_ = name;
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
	std::cout << this->name_ << " attacks with their " << this->weapon_->getType() << std::endl;
}
