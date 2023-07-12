/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:09:56 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:22:11 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "New Dog created." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed." << std::endl;
}

Dog::Dog(Dog & ref)
{
	this->_type = ref.getType();
	std::cout << "A dog was constructed from copy\n";
}

Dog & Dog::operator=(Dog const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woouuff Woouufff !!" << std::endl;
}

std::string Dog::getType() const
{
	return (this->_type);
}

