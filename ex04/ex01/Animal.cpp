/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:18:41 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:28:54 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "New Animal created." << std::endl;
	this->_type = "animal";

}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}

Animal::Animal(Animal const & ref)
{
	this->_type = ref._type;
	std::cout << "Animal was created from a copy\n";
}

Animal & Animal::operator=(Animal const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
