#ifndef CAT_H
# define CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& src);
	~Cat();
	Cat& operator=(const Cat& src);
	void makeSound() const;
	Brain* getBrain() const;
private:
	Brain* m_brain;
};

#endif
