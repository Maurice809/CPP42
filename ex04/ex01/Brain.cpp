/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:19:10 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/20 11:19:15 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Braiiiin ideaaa";
	std::cout << "A brain created and filled with 100 ideas\n";
}

Brain::~Brain()
{
	delete [] (this->_ideas);
	std::cout << "A brain destroyed\n";
}

Brain::Brain(Brain & ref)
{
	std::string *ref_ideas = ref.getIdeas();
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref_ideas[i] + " copied";
	std::cout << "A brain and his ideas copy created \n";
}

Brain & Brain::operator=(Brain const & ref)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->_ideas);
}
