#include "Duck.h"
#include <iostream>
Duck::Duck(std::string n) : Animal(n, "Duck", "Quack")
{

}

void Duck::speak() const
{
	Animal::speak();
	std::cout << " and I like swimming \n";
}

int Duck::feed()
{
	return ++fed;
}

void Duck::swim()
{
	std::cout << "splash  splash splash \n";
}

void Duck::move()
{
	std::cout << "i am currently swimming\n";
}
