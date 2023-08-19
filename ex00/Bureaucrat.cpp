#include "./includes/Bureaucrat.hpp"
#include "./includes/MyException.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	this->grade = copy.grade;
}

Bureaucrat::Bureaucrat(int _g)
{
	if (_g > 150 || _g < 1)
	{
		throw MyException(_g);
	}
	this->grade = _g;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
	this->grade = other.grade;
	return *this;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

void Bureaucrat::gradeUp(){
	if (this->grade + 1 > 150)
	{
		throw MyException(this->grade + 1);
	}
	this->grade += 1;
}

void Bureaucrat::gradeDown(){
	if (this->grade - 1 < 1)
	{
		throw MyException(this->grade - 1);
	}
	this->grade -= 1;
}
