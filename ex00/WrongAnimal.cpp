#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
{
	*this = origin;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type <<" says battleroar!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}