/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:23:14 by jnoh              #+#    #+#             */
/*   Updated: 2023/01/12 16:35:42 by jnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): weapon_(weapon)
{
	this->name_ = name;
}

HumanA::~HumanA()
{
	std::cout << "HumanA [" << this->name_ << "] is destroyed" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << this->name_ << " attacks with their " << this->weapon_.getType() << std::endl;
}
