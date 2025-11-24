#include "Dog.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
Dog::Dog()
{
	m_type = "Dog";
	m_sound = "Wouaf";
	m_brain = new Brain;
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Brain& brain)
{
	m_type = "Dog";
	m_sound = "Wouaf";
	m_brain = new Brain;
	*m_brain = brain;
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& src)
{
	m_type = src.m_type;
	m_sound = src.m_sound;
	m_brain = new Brain;
	*m_brain = *(src.m_brain);
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete m_brain;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this != &src) {
		m_brain = new Brain;
		*m_brain = *(src.m_brain);
		m_type = src.m_type;
		m_sound = src.m_sound;
	}
	std::cout << "Dog copy assignement operator called\n";
	return (*this);
}

Brain* Dog::getBrain() const
{
	return (m_brain);
}
