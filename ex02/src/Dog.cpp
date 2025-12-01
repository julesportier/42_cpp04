#include "Dog.h"
#include <iostream>

/***************************
 * CONSTRUCTORS/DESTRUCTOR *
 * ************************/
Dog::Dog()
{
	m_type = "Dog";
	m_brain = new Brain;
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& src) : Animal::Animal(src)
{
	m_type = src.m_type;
	m_brain = new Brain;
	*m_brain = *(src.m_brain);
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << "Dog destructor called\n";
}

/*************
 * OPERATORS *
 * **********/
Dog& Dog::operator=(const Dog& src)
{
	if (this != &src) {
		*m_brain = *(src.m_brain);
	}
	std::cout << "Dog copy assignement operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
Brain* Dog::getBrain() const
{
	return (m_brain);
}

/***********
 * METHODS *
 * ********/
void Dog::makeSound() const
{
	std::cout << "wouaf\n";
}
