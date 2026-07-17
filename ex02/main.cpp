#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{

    std::cout << "==============================" << std::endl;
    std::cout << " Basic Test" << std::endl;
    std::cout << "==============================" << std::endl;
    
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

   // AAnimal animal;   // Error
  // كيف نجعل الكلاس Abstract؟
//بإضافة Pure Virtual Function.
    
    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
    std::cout << std::endl;

    return (0);
}