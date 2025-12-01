#include "Dog.h"
#include <iostream>

/***************************
 * CONSTRUCTORS/DESTRUCTOR *
 * ************************/
Dog::Dog()
{
	m_type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& src) : Animal::Animal(src)
{
	m_type = src.m_type;
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

/*************
 * OPERATORS *
 * **********/
Dog& Dog::operator=(const Dog& src)
{
	if (this != &src) {
		m_type = src.m_type;
	}
	std::cout << "Dog copy assignement operator called\n";
	return (*this);
}

/***********
 * METHODS *
 * ********/
void Dog::makeSound() const
{
	std::cout << "wouaf\n";
}
