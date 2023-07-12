/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:50:43 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/20 11:50:46 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	*_ideas;
	public:
		Brain();
		~Brain();
		Brain(Brain & ref);
		Brain & operator=(Brain const & ref);
		
		std::string *getIdeas();
};

#endif
