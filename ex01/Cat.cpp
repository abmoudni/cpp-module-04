#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);

}

Cat& Cat::operator=(const Cat& other) //Deep Copy ?//
{
    std::cout << "Cat copy assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other);//Upcasting

        delete brain;                
        brain = new Brain(*other.brain);
    }

    return *this;
}

Cat::~Cat()
{    
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}