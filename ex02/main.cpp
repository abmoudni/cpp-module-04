#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

    std::cout << "==============================" << std::endl;
    std::cout << " Basic Test" << std::endl;
    std::cout << "==============================" << std::endl;

   // AAnimal a;
  //  a.makeSound();
    
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    std::cout << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << " Array Test" << std::endl;
    std::cout << "==============================" << std::endl;

    AAnimal* animals[10];

    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();

    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 10; i++)
        delete animals[i];

    std::cout << std::endl;

    return (0);
}