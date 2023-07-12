/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:32:08 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:40:44 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// BASIC
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	delete dog;
	delete cat;

	std::cout << std::endl;
	std::cout << std::endl;

	// REF & COPY
	Dog medor;
	Cat felix;

	felix.printBrain();
	std::cout << std::endl;

	Dog & medor_ref = medor;
	Cat & felix_ref = felix;

	felix_ref.printBrain();

	Dog medor_copy(medor_ref);
	Cat felix_copy(felix_ref);

	felix_copy.printBrain();

	std::cout << std::endl;

	// TABLEAU
	const Animal	*(animal_array[4]);
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;
}
