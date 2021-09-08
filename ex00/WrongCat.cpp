#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& origin)
{
	*this = origin;
}

WrongCat& WrongCat::operator=(const WrongCat& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << this->type <<" says meow!" << std::endl;
}