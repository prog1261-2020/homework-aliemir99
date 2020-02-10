#include "Cat.h"
#include <iostream>
Cat::Cat(std::string n) : Animal(n,"Cat","meow")
{

}

void Cat::speak() const
{
	Animal::speak();
	std::cout << " and I like mice \n";
}

int Cat::pet()
{
	return ++petted;
}

void Cat::move()
{
	std::cout << "i am currently moving\n";
}
