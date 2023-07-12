/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:53:16 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/10 17:12:01 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// Creator / Destructor

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_gateKeeper = false;
	std::cout << "New ScavTrap created." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_gateKeeper = false;
	std::cout << "New Scavtrap called " << name << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap : " << this->_name << " destroyed." << std::endl;
}

// Methods

void	ScavTrap::guardGate(void)
{
	this->_gateKeeper = true;
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
