#include "Brain.h"
#include <iostream>

/****************
 * CONSTRUCTORS *
 * *************/
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
	if (&src != this) {
		for (int i = 0; i < 100; ++i) {
			m_ideas[i] = src.m_ideas[i];
		}
	}
	std::cout << "Brain copy assignment operator called\n";
	return (*this);
}

/***********
 * GETTERS *
 * ********/
const std::string* Brain::getIdeas() const
{
	return (m_ideas);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99) {
		std::cout << "Brain::setIdeas error: index out of range\n";
		return ;
	}
	m_ideas[i] = idea;
}

/***********
 * METHODS *
 * ********/
void Brain::printIdeas() const
{
	for (int i = 0; i < 100; ++i) {
		std::cout << m_ideas[i];
		if (i < 99)
			std::cout << " ; ";
		else
			std::cout << '\n';
	}
}
