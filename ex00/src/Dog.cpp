#include "Dog.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
Dog::Dog()
{
	m_type = "Dog";
	m_sound = "Wouaf";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& src)
{
	m_type = src.m_type;
	m_sound = src.m_sound;
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

Dog& Dog::operator=(const Dog& src)
{
	if (this != &src) {
		m_type = src.m_type;
		m_sound = src.m_sound;
	}
	std::cout << "Dog copy assignement operator called\n";
	return (*this);
}
