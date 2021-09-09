#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *equipment[4];
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & origin);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		Character const & operator=(Character const & origin);
};

#endif