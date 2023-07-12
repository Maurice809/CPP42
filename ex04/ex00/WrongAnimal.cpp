/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:11:33 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:23:04 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "New WrongAnimal created." << std::endl;
	this->_type = "wronganimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & ref)
{
	this->_type = ref._type;
	std::cout << "Wrong Animal created from a copy\n";
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "this WrongAnimal is not a WrongCat\n";
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
