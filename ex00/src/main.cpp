#include "Animal.h"
#include "WrongAnimal.h"
#include "WrongCat.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main(void)
{
	std::cout << "--------\nSUBJECT TESTS:\n--------\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "\n--------\nSUBJECT TESTS: WrongAnimal\n--------\n";
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();
	std::cout << w_i->getType() << " " << std::endl;
	w_i->makeSound();
	w_meta->makeSound();
	delete w_meta;
	delete w_i;

	std::cout << "\n--------\nMY TESTS:\n--------\n";
	std::cout << "\nANIMAL:\n";
	Animal a0;
	std::cout << a0.getType() << '\n';
	a0.makeSound();

	std::cout << "\nDOG:\n";
	Dog d0;
	Dog d1;
	d1 = d0;
	std::cout << d1.getType() << '\n';
	d1.makeSound();
	Dog dx(d0);
	std::cout << dx.getType() << '\n';
	dx.makeSound();

	std::cout << "\nCAT:\n";
	Cat c0;
	Cat c1;
	c1 = c0;
	std::cout << c1.getType() << '\n';
	c1.makeSound();
	Cat cx(c0);
	std::cout << cx.getType() << '\n';
	cx.makeSound();
	std::cout << "\nDESTRUCTORS:\n";

	return (0);
}
