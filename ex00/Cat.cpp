#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& origin)
{
	*this = origin;
}

Cat& Cat::operator=(const Cat& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->type <<" says meow!" << std::endl;
}