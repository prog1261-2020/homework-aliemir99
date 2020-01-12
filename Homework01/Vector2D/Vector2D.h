#pragma once

#include <string>
class Vector2D
{
public:
	Vector2D(int x, int y);
	
	//calculate equals depending on the length
	bool operator == (const Vector2D& rhs) const;
	bool operator != (const Vector2D& rhs) const;

	//homework
	//only implement less than then use not less than as greather than etc. do all the operators.
	
	bool operator < (const Vector2D& rhs) const;
	bool operator > (const Vector2D& rhs) const;
	bool operator <= (const Vector2D& rhs) const;
	bool operator >= (const Vector2D& rhs) const;

	//almostLength function has been written as requested in the homework however is not used 
	//because the resulting of the operators would not change either way.
	int almostLength();

	std::string toString() const;
private:
	int _x;
	int	_y;
};

