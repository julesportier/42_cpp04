#include "WrongCat.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
WrongCat::WrongCat()
{
	m_type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal::WrongAnimal(src)
{
	m_type = src.m_type;
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	if (this != &src) {
		m_type = src.m_type;
	}
	std::cout << "WrongCat copy assignement operator called\n";
	return (*this);
}

/***********
 * METHODS *
 * ********/
void WrongCat::makeSound() const
{
	std::cout << "meow\n";
}
