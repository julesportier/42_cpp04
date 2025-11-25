#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal {
public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();
	Animal& operator=(const Animal& src);
	std::string getType() const;
	virtual void makeSound() const;
protected:
	std::string m_type;
};

#endif
