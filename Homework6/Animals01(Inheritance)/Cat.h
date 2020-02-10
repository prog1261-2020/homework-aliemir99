#pragma once
#include "Animal.h"
#include <string>
class Cat : public Animal
{
public:
	Cat(std::string name);
	void speak() const override;
	int pet();
	void move();
private:
	int petted = 0;

};

