#include "includes/MyException.hpp"

const int & MyException::get_grade() const
{
	return this->_grade;
}
