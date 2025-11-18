#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <sstream>

int main(void)
{
	int size = 9;
	int half = size / 2;
	Brain std_brain;
	for (int i = 0; i < 100; ++i) {
		std::stringstream stream;
		stream << i;
		std_brain.m_ideas[i] = stream.str();
	}
	std_brain.print_ideas();
	Animal *animal_array[size];
	for (int i = 0; i < half; ++i) {
		animal_array[i] = new Dog(std_brain);
	}
	for (int i = half; i < size; ++i) {
		animal_array[i] = new Cat;
	}
	for (int i = 0; i < size; ++i) {
		std_brain.print_ideas();
		delete animal_array[i];
	}

	// Dog *dog = new(Dog);
	// dog->getBrain()->m_ideas[0] = "test" ;
	// std::cout << dog->getBrain()->m_ideas << '\n';
	// std::cout << dog->getBrain()->m_ideas[0] << '\n';
	// Dog dog_cpy(*dog);
	// std::cout << dog_cpy.getBrain()->m_ideas << '\n';
	// std::cout << dog_cpy.getBrain()->m_ideas[0] << '\n';
	// delete(dog);
	return (0);
}
//#include <typeinfo>
// int main(void)
// {
// 	Animal a0;
// 	std::cout << a0.getType() << '\n';
// 	a0.makeSound();
// 	std::cout << '\n';
//
// 	Animal acp(a0);
// 	std::cout << acp.getType() << '\n';
// 	std::cout << '\n';
//
// 	Dog d0;
// 	Dog d1 = d0;
// 	std::cout << d1.getType() << '\n';
// 	std::cout << typeid(d1).name() << '\n';
// 	d1.makeSound();
// 	a0 = d0;
// 	std::cout << a0.getType() << '\n';
// 	std::cout << typeid(a0).name() << '\n';
// 	a0.makeSound();
// 	std::cout << '\n';
//
// 	Cat c0;
// 	std::cout << c0.getType() << '\n';
// 	std::cout << typeid(c0).name() << '\n';
// 	c0.makeSound();
// 	return (0);
// }
