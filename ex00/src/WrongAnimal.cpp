#include "WrongAnimal.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
WrongAnimal::WrongAnimal() : m_type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : m_type(src.m_type)
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this != &src) {
		m_type = src.m_type;
	}
	std::cout << "WrongAnimal copy assignement operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
std::string WrongAnimal::getType() const
{
	return (m_type);
}

/***********
 * METHODS *
 * ********/
void WrongAnimal::makeSound() const
{
	std::cout << "...\n";
}
