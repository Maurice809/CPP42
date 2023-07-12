/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:35:45 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:35:47 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "New WrongCat created." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat::WrongCat(WrongCat & ref)
{
	this->_type = ref.getType();
	std::cout << "A WrongCat created from copy\n";
}

WrongCat & WrongCat::operator=(WrongCat const & ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Fake miaouuuu\n";
}
