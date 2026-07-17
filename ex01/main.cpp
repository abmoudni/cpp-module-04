#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "==============================" << std::endl;
    std::cout << " Basic Test" << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << std::endl;

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;

    dog->makeSound();
    cat->makeSound();
    std::cout << std::endl;

    delete dog;
    delete cat;

    Animal* animals[10];
    std::cout << std::endl;

    // Dogs
    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();

    std::cout << std::endl;

    // Cats
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();
    
    std::cout << std::endl;

    // Delete as Animals
    for (int i = 0; i < 10; i++)
        delete animals[i];

    std::cout << std::endl;
    return (0);
}