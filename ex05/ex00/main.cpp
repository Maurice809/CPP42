/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:18:52 by aducret           #+#    #+#             */
/*   Updated: 2023/02/16 15:36:53 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	*test;

	try
	{
		test = new Bureaucrat("test1", 151);
		std::cout << *test << std::endl;
		delete test;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		test = new Bureaucrat("test2", 151);
		std::cout << *test << std::endl;
		delete test;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		test = new Bureaucrat("test3", 10);
		std::cout << *test << std::endl;
		delete test;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}