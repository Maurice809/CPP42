/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:12:29 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:23:01 by Maurice809       ###   ########seoul.kr  */
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
