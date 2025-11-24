#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& src);
	std::string getType() const;
	void makeSound() const;
protected:
	std::string m_type;
};

#endif
