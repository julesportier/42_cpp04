#include "Brain.h"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; ++i) {
		m_ideas[i] = src.m_ideas[i];
	}
	std::cout << "Brain copy constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(const Brain& src)
{
	for (int i = 0; i < 100; ++i) {
		m_ideas[i] = src.m_ideas[i];
	}
	std::cout << "Brain copy assignment operator called\n";
	return (*this);
}
void Brain::print_ideas() const
{
	for (int i = 0; i < 100; ++i) {
		std::cout << m_ideas[i];
		if (i < 99)
			std::cout << " ; ";
		else
			std::cout << '\n';
	}
}
