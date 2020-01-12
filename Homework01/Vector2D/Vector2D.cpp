

#include "Vector2D.h"
#include <sstream>



Vector2D::Vector2D(int x, int y) : _x(x),_y(y)
{
	if (_x < 0)
	{
		_x *= -1;
	}
	if (_y < 0)
	{
		_y *= -1;
	}
}

// All the operators are written in terms of "==" or "<" operators as requested for the homework
// almostLength() -> could be used in every case that is adding x and y components of a vector2D object
bool Vector2D::operator==(const Vector2D& rhs) const
{
	return (this->_x + this->_y == rhs._x + rhs._y);
}

bool Vector2D::operator!=(const Vector2D& rhs) const
{
	return !(this->_x + this->_y == rhs._x + rhs._y);
}

bool Vector2D::operator<(const Vector2D& rhs) const
{
	return (this->_x + this->_y < rhs._x + rhs._y);

}

bool Vector2D::operator>(const Vector2D& rhs) const
{
	return !(this->_x + this->_y < rhs._x + rhs._y);
}

bool Vector2D::operator<=(const Vector2D& rhs) const
{
	return (this->_x + this->_y < rhs._x + rhs._y || this->_x + this->_y == rhs._x + rhs._y);
}

bool Vector2D::operator>=(const Vector2D& rhs) const
{
	return ((!(this->_x + this->_y < rhs._x + rhs._y)) || this->_x + this->_y == rhs._x + rhs._y);
}

int Vector2D::almostLength()
{
	return _x + _y;
}

std::string Vector2D::toString() const
{
	std::stringstream ss;
	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}
