#ifndef DOG_H
# define DOG_H

# include <string>
# include "Animal.h"
# include "Brain.h"

class Dog : public Animal {
public:
	Dog();
	Dog(const Brain& brain);
	Dog(const Dog& src);
	virtual ~Dog();
	Dog& operator=(const Dog& src);
	Brain* getBrain() const;
private:
	Brain* m_brain;
};

#endif
