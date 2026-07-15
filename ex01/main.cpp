#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "==============================" << std::endl;
    std::cout << " Basic Test" << std::endl;
    std::cout << "==============================" << std::endl;

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;

    dog->makeSound();
    cat->makeSound();
    std::cout << std::endl;

    delete dog;
    delete cat;

    std::cout << std::endl;
    return (0);
}