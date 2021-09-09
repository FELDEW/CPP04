#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& origin);
		Cat& operator=(const Cat&);
		void makeSound() const;
		Brain *getBrain();
	private:
		Brain *brain;
};


#endif