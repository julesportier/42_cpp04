#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <typeinfo>

int main(void)
{
	Animal a0;
	std::cout << a0.getType() << '\n';
	a0.makeSound();
	std::cout << '\n';

	// Animal acp(a0);
	// std::cout << acp.getType() << '\n';
	// std::cout << '\n';

	// Dog d0;
	// Dog d1;
	// d1 = d0;
	// std::cout << d1.getType() << '\n';
	// std::cout << typeid(d1).name() << '\n';
	// d1.makeSound();
	// a0 = d0;
	// std::cout << a0.getType() << '\n';
	// std::cout << typeid(a0).name() << '\n';
	// a0.makeSound();
	// std::cout << '\n';

	Cat c0;
	Cat c1;
	c1 = c0;
	std::cout << c1.getType() << '\n';
	std::cout << typeid(c1).name() << '\n';
	c1.makeSound();
	a0 = c0;
	std::cout << a0.getType() << '\n';
	std::cout << typeid(a0).name() << '\n';
	a0.makeSound();
	std::cout << '\n';

	Dog dx;
	std::cout << dx.getType() << '\n';
	std::cout << typeid(dx).name() << '\n';
	dx.makeSound();
	// Cat c0;
	// std::cout << c0.getType() << '\n';
	// std::cout << typeid(c0).name() << '\n';
	// c0.makeSound();
	return (0);
}
