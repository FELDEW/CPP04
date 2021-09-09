#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat()
{
	if (this->brain)
		delete this->brain;
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& origin)
{
	this->brain = NULL;
	*this = origin;
}

Cat& Cat::operator=(const Cat& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*origin.brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->type <<" says meow!" << std::endl;
}

Brain *Cat::getBrain()
{
	return (this->brain);
}