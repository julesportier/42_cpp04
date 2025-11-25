#include "Cat.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
Cat::Cat()
{
	m_type = "Cat";
	m_brain = new Brain;
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& src)
{
	m_type = src.m_type;
	m_brain = new Brain;
	*m_brain = *(src.m_brain);
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src) {
		*m_brain = *(src.m_brain);
	}
	std::cout << "Cat copy assignement operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
Brain* Cat::getBrain() const
{
	return (m_brain);
}

/***********
 * METHODS *
 * ********/
void Cat::makeSound() const
{
	std::cout << "meow\n";
}
