/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:16:25 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 16:35:02 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type_ = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon [" << this->type_ << "] is destroyed" << std::endl;
}

const std::string&	Weapon::getType( void )
{
	return ((const std::string&)this->type_);
}

void	Weapon::setType( std::string type )
{
	this->type_ = type;
}
