/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:32:37 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:21:18 by Maurice809       ###   ########seoul.kr  */
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
	if (this->_type != "")
		std::cout << "Animal that is a "<< this->_type << " destroyed." << std::endl;
	else
		std::cout << "Animal destroyed." << std::endl;
}

Animal::Animal(Animal & ref)
{
	this->_type = ref._type;
	std::cout << "New Animal created from a copy\n";
}

Animal & Animal::operator=(Animal const & ref)
{
	this->_type = ref._type;
	return (*this);
}


void	Animal::makeSound() const
{
	// if (this->_type == "Dog")
	// 	std::cout << "Woouuff Woouufff !!" << std::endl;
	// else if (this->_type == "Cat")
	// 	std::cout << "Miaouuu Miaouuu !!" << std::endl;
	// else
	// 	std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;
	
	std::cout << "This Animal is not a Dog or a Cat, set his type!" << std::endl;

}

std::string	Animal::getType() const
{
	return (this->_type);
}

