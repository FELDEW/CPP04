#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::~Dog()
{
	if (this->brain)
		delete this->brain;
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& origin)
{
	this->brain = NULL;
	*this = origin;
}

Dog& Dog::operator=(const Dog& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*origin.brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->type <<" says gaw!" << std::endl;
}

Brain *Dog::getBrain()
{
	return (this->brain);
}