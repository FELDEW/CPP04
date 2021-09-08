#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal(const Animal& origin)
{
	*this = origin;
}

Animal& Animal::operator=(const Animal& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << this->type <<" says battleroar!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}