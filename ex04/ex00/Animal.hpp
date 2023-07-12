/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:33:04 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:44:48 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal & ref);
		Animal & operator=(Animal const & ref);

		virtual void		makeSound() const;
		virtual std::string	getType() const;
};

#endif
