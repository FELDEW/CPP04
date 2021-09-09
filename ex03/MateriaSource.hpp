#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *source[4];
	public:
		MateriaSource();
    	~MateriaSource();
		MateriaSource(MateriaSource const & origin);
    	void learnMateria(AMateria*);
    	AMateria* createMateria(std::string const & type);
		MateriaSource const & operator=(MateriaSource const & origin);
};

#endif