/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:23:02 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:29:27 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "Aanimal";
	std::cout << "AAnimal created\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed\n";
}

AAnimal::AAnimal(AAnimal const & ref)
{
	this->_type = ref.getType();
	std::cout << "AAnimal created from a copy\n";
}

AAnimal & AAnimal::operator=(AAnimal const & ref)
{
	this->_type = ref.getType();
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}
