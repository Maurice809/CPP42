/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:20:48 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:39:18 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(Dog & ref);
		Dog & operator=(Dog const & ref);
		
		void		makeSound() const;
		std::string	getType() const;
		Brain		*getBrain() const;

		void		printBrain() const;
};

#endif
