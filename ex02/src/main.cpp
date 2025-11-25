#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main(void)
{
	std::cout << "--------\nSUBJECT TESTS:\n--------\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\nARRAY OF ANIMALS POINTERS:\n";
	int size = 10;
	int half = size / 2;
	Animal *animal_array[size];
	for (int i = 0; i < half; ++i) {
		animal_array[i] = new Dog;
	}
	for (int i = half; i < size; ++i) {
		animal_array[i] = new Cat;
	}
	for (int i = 0; i < size; ++i) {
		std::cout << animal_array[i]->getType() << '\n';
		animal_array[i]->makeSound();
		delete animal_array[i];
	}

	std::cout << "\n--------\nMY TESTS:\n--------";
	std::cout << "\nDEEP COPIES DOG:\n";
	Dog *dog = new(Dog);
	std::cout << dog->getType() << '\n';
	dog->makeSound();
	dog->getBrain()->setIdea(0, "test");
	std::cout << dog->getBrain()->getIdeas() << '\n';
	dog->getBrain()->printIdeas();
	Dog dog_cpy(*dog);
	std::cout << dog_cpy.getBrain()->getIdeas() << '\n';
	dog_cpy.getBrain()->printIdeas();
	dog_cpy = *dog;
	delete(dog);

	std::cout << "\nDEEP COPIES CAT:\n";
	Cat *cat = new(Cat);
	std::cout << cat->getType() << '\n';
	cat->makeSound();
	cat->getBrain()->setIdea(0, "test");
	std::cout << cat->getBrain()->getIdeas() << '\n';
	cat->getBrain()->printIdeas();
	Cat cat_cpy(*cat);
	std::cout << cat_cpy.getBrain()->getIdeas() << '\n';
	cat_cpy.getBrain()->printIdeas();
	cat_cpy = *cat;
	delete(cat);
	std::cout << "\nAUTO DESTRUCTORS:\n";
	return (0);
}
