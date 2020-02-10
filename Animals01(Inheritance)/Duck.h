#pragma once
#include "Animal.h"
#include <string>
class Duck : public Animal
{
public:
	Duck(std::string name);
	void speak() const override;
	int feed();
	void swim();
	void move();
private:

	int fed = 0;

};