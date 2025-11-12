#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain& src);
	~Brain();
	Brain& operator=(const Brain& src);
	std::string m_ideas[100];
	void print_ideas() const;
};

#endif
