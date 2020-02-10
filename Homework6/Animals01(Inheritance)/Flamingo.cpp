#include "Flamingo.h"
#include <iostream>
Flamingo::Flamingo(std::string n) : Animal(n, "Flamingo", "Chirp")
{

}

void Flamingo::speak() const
{
	Animal::speak();
	std::cout << " and I like flying \n";
}

int Flamingo::feed()
{
	return ++fed;
}

void Flamingo::fly()
{
	std::cout << "i am attempting to fly \n";
}

void Flamingo::move()
{
	std::cout << "i am currently hanging around\n";
}
