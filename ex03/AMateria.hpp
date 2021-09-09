#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		virtual ~AMateria();
    	AMateria(std::string const & type);
		AMateria(const AMateria& origin);
		AMateria& operator=(const AMateria& origin);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif