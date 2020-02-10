#pragma once
#include "Animal.h"
#include <string>
class Flamingo : public Animal
{
public:
	Flamingo(std::string name);
	void speak() const override;
	int feed();
	void fly();
	void move();
private:

	int fed = 0;

};
