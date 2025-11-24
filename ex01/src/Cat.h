#ifndef CAT_H
# define CAT_H

# include <string>
# include "Animal.h"
# include "Brain.h"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& src);
	Cat(const Brain& brain);
	virtual ~Cat();
	Cat& operator=(const Cat& src);
	Brain* getBrain() const;
private:
	Brain* m_brain;
};

#endif
