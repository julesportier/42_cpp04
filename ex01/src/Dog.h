#ifndef DOG_H
# define DOG_H

# include "Animal.h"
# include "Brain.h"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& src);
	~Dog();
	Dog& operator=(const Dog& src);
	void makeSound() const;
	Brain* getBrain() const;
private:
	Brain* m_brain;
};

#endif
