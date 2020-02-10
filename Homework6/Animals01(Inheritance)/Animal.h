#pragma once

#include <string>

class Animal
{
private:
	Animal();

protected:
	

public:

	Animal(const std::string& name, const std::string& type, const std::string& sound);
	virtual void speak() const;
	virtual void move() = 0;


	//virtual void move() = 0; // abstract function (appearence of an abstract function makes the whole class abstract)

	const std::string& getName() const;
	const std::string& getType() const;
	const std::string& getSound() const;

protected:
	std::string name;
	std::string type;
	std::string sound;
};

