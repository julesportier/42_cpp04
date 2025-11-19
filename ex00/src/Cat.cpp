#include "Cat.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
Cat::Cat()
{
	m_type = "Cat";
	m_sound = "Meow";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& src) : Animal::Animal(src)
{
	m_type = src.m_type;
	m_sound = src.m_sound;
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src) {
		m_type = src.m_type;
		m_sound = src.m_sound;
	}
	std::cout << "Cat copy assignement operator called\n";
	return (*this);
}
