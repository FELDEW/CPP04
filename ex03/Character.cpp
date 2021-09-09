#include "Character.hpp"


Character::Character():name("Unknown")
{
	for(int i = 0; i < 4; i++)
		this->equipment[i] = NULL;
}

Character::Character(std::string const & name): name(name)
{
	for(int i = 0; i < 4; i++)
		this->equipment[i] = NULL;
}

Character::Character(Character const & origin)
{
	for(int i = 0; i < 4; i++)
		this->equipment[i] = NULL;
	*this = origin;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->equipment[i])
			delete this->equipment[i];
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->equipment[i])
		{
			this->equipment[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->equipment[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->equipment[idx] != NULL)
	{
		std::cout << this->name;
		this->equipment[idx]->use(target);
	}
}

Character& Character::operator=(const Character& origin)
{
	if (this == &origin)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->equipment[i])
			delete this->equipment[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (origin.equipment[i])
			this->equipment[i] = origin.equipment[i]->clone();
	}
	this->name = origin.name;
	return (*this);
}