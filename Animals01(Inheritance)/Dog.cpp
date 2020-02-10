#include "Dog.h"
#include <iostream>
Dog::Dog(std::string n) : Animal(n, "Dog", "Gav")
{

}

void Dog::speak() const
{
	Animal::speak();
	std::cout << " and I like bones \n";
}

int Dog::walk()
{
	return walked++;
}

void Dog::move()
{
	std::cout << "i am currently moving\n";
}