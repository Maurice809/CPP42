/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:08:37 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:21:47 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "New Cat created." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}

Cat::Cat(Cat & ref)
{
	this->_type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(Cat const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuu Miaouuu !!" << std::endl;
}

std::string Cat::getType() const
{
	return (this->_type);
}

