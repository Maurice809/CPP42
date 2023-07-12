/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:51:00 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:38:30 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "A cat was constructed, with its new brain\n";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc& e) 
	{
		std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
	}
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "A cat was destroyed, his brain too\n";
}

Cat::Cat(Cat & ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat created from copy, but with a new brain\n";
}

Cat & Cat::operator=(Cat const & ref)
{
	this->_type = ref._type;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain(*(ref.getBrain()));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouuu Miaaouuu\n";
}

std::string Cat::getType() const
{
	return (this->_type);
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::printBrain() const
{
	for (int i = 0; i < 100; i++)
		std::cout << ((this->_brain)->getIdeas())[i] << " " << i + 1 << std::endl;
}
