#pragma once
#include "Animal.h"
#include <string>
class Fox : public Animal
{
public:
	Fox(std::string name);
	void speak() const override;
	int feed();
	void sneak();
	void move();
private:

	int fed = 0;

};
