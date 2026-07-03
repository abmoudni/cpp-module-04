#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "======== Subject Test ========" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl;

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n======== Wrong Animal ========\n";

    const WrongAnimal* wrong = new WrongCat();

    std::cout << wrong->getType() << std::endl;

    wrong->makeSound();

    delete wrong;

    std::cout << "\n======== More Tests ========\n";

    Animal a;
    Dog d;
    Cat c;

    Animal* animals[4];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();

    for (int i = 0; i < 4; i++)
        delete animals[i];


    std::cout << "test wrong animal" << std::endl;

    const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat    = new WrongCat();

	std::cout << "\n ==== " << wrongAnimal->getType() << " & " << wrongCat->getType() << " ==== " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound(); // will output the wrongAnimal sound
	std::cout << std::endl;

	delete wrongAnimal;
	delete wrongCat;
    return 0;
}