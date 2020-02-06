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
