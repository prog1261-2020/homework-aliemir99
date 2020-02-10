#include "Fox.h"
#include <iostream>
Fox::Fox(std::string n) : Animal(n, "Fox", "reee")
{

}

void Fox::speak() const
{
	Animal::speak();
	std::cout << " and I like sneaking \n";
}

int Fox::feed()
{
	return ++fed;
}

void Fox::sneak()
{
	std::cout << "step-step-step \n";
}

void Fox::move()
{
	std::cout << "i am currently sneaking\n";
}