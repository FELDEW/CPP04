#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& origin)
{
	for(int i = 0; i < 4; i++)
		this->source[i] = NULL;
	*this = origin;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i])
			delete this->source[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->source[i])
		{
			this->source[i] = m->clone();
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i]->getType() == type)
			return this->source[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& origin)
{
	if (this == &origin)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i])
			delete this->source[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (origin.source[i])
			this->source[i] = origin.source[i]->clone();
	}
	return (*this);
}