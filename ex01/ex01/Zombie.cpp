/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:35:57 by tmoret            #+#    #+#             */
/*   Updated: 2023/02/20 17:13:19 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

Zombie::Zombie()
{
    this->_name = "";
    std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
