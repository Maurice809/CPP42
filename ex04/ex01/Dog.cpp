/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:20:32 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:28:50 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog created with a brain\n";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) 
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed, his brain too\n";
}

Dog::Dog(Dog & ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "A dog created from a dog copy, but with a new brain\n";
}


Dog & Dog::operator=(Dog const & ref)
{
	this->_type = ref._type;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(ref.getBrain()));
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woouuuf woouuuf\n";
}

std::string Dog::getType() const
{
	return (this->_type);
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::printBrain() const
{
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << " " << i + 1 << std::endl;
}
