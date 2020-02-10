#pragma once
#include "Animal.h"
#include <string>
class Dog : public Animal
{
public:
	Dog(std::string name);
	void speak() const override;
	int walk();
	void move();
private:
	int walked = 0;
};