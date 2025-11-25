#include "Animal.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
Animal::Animal() : m_type("Animal")
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& src) : m_type(src.m_type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal& Animal::operator=(const Animal& src)
{
	if (this != &src) {
		m_type = src.m_type;
	}
	std::cout << "Animal copy assignement operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
std::string Animal::getType() const
{
	return (m_type);
}

/***********
 * METHODS *
 * ********/
void Animal::makeSound() const
{
	std::cout << "...\n";
}
