#ifndef CAT_H
# define CAT_H

// # include <string>
# include "Animal.h"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& src);
	~Cat();
	Cat& operator=(const Cat& src);
	void makeSound() const;
};

#endif
