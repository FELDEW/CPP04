#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria::AMateria(const AMateria& origin)
{
	*this = origin;
}

void AMateria::use(ICharacter&)
{

}

AMateria& AMateria::operator=(const AMateria& origin)
{
	if (this == &origin)
		return (*this);
	this->type = origin.type;
	return (*this);
}