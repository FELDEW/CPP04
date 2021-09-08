#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& origin)
{
	*this = origin;
}

Dog& Dog::operator=(const Dog& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->type <<" says gaw!" << std::endl;
}