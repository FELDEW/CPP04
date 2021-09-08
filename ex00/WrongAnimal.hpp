#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& origin);
		WrongAnimal& operator=(const WrongAnimal&);
		void makeSound() const;
		std::string	getType() const;
	protected:
		std::string type;
};


#endif