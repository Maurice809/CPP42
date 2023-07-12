#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat & ref);
		WrongCat & operator=(WrongCat const & ref);
		
		void makeSound() const;

};

#endif