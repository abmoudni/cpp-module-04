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

    const WrongCat* wrong = new WrongCat();
    WrongAnimal* wrongAnimal = new WrongAnimal();

    std::cout << wrong->getType() << std::endl;

    wrongAnimal->makeSound();
    wrong->makeSound();

    delete wrong;
    return 0;
}