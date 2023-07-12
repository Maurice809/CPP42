/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:20:16 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:40:20 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		~Cat();
		Cat(Cat & ref);
		Cat & operator=(Cat const & ref);

		void		makeSound() const;
		std::string	getType() const;
		Brain		*getBrain() const;

		void		printBrain() const;
};

#endif
