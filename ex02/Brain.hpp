#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain&);
		std::string *getIdeas();
		Brain& operator=(const Brain&);
	private:
		std::string ideas[100];


};

#endif