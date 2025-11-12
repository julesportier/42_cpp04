#include "Cat.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
Cat::Cat()
{
	m_type = "Cat";
	m_sound = "Meow";
	m_brain = new Brain;
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& src) : Animal::Animal(src)
{
	m_type = src.getType();
	m_sound = src.getSound();
	m_brain = new Brain;
	*m_brain = *(src.getBrain());
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete m_brain;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this != &src) {
		m_brain = new Brain;
		*m_brain = *(src.getBrain());
		m_type = src.getType();
		m_sound = src.getSound();
	}
	std::cout << "Cat copy assignement operator called\n";
	return (*this);
}

Brain* Cat::getBrain() const
{
	return (m_brain);
}
