#include <string>

class Animal {
public:
	Animal();
	Animal(const Animal& src);
	~Animal();
	virtual Animal& operator=(const Animal& src);
	virtual std::string getType() const;
	virtual std::string getSound() const;
	virtual void makeSound() const;
protected:
	std::string m_type;
	std::string m_sound;
};
