#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	*this = brain;
	std::cout << "Brain copy called!" << std::endl;
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}

Brain& Brain::operator=(const Brain& origin)
{
	if (this == &origin)
		return (*this);
	for (size_t i = 0; i < this->ideas->size(); i++)
		this->ideas[i] = origin.ideas[i];
	return (*this);
}