#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& origin);
		Dog& operator=(const Dog&);
		void makeSound() const;
		Brain *getBrain();
	private:
		Brain *brain;
};


#endif