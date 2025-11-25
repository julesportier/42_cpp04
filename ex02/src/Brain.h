#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain {
public:
	Brain();
	Brain(const Brain& src);
	~Brain();
	Brain& operator=(const Brain& src);
	void printIdeas() const;
	const std::string* getIdeas() const;
	void setIdea(int i, std::string idea);
private:
	std::string m_ideas[100];
};

#endif
