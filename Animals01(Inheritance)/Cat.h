#pragma once
#include "Animal.h"
#include <string>
class Cat : public Animal
{
public:
	Cat(std::string name);
	void speak() const;

};

