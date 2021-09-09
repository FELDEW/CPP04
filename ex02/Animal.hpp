#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& origin);
		Animal& operator=(const Animal&);
		virtual void makeSound() const = 0;
		std::string	getType() const;
	protected:
		std::string type;
};


#endif