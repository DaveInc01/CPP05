#include "./includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){}


Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	this->grade = copy.grade;
}

Bureaucrat::Bureaucrat(int _g) : name("Bureaucrat")
{
	if ( _g > 150 )
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if( _g < 1 )
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade = _g;
}

Bureaucrat::Bureaucrat(int _g, const std::string n) : name(n)
{
	if ( _g > 150 )
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if( _g < 1 )
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade = _g;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
	this->grade = other.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const std::string n) : name(n), grade(150){}

int Bureaucrat::getGrade() const{
	return this->grade;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

void Bureaucrat::gradeUp(){
	if (this->grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade -= 1;
}

void Bureaucrat::gradeDown(){
	if (this->grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &Bureaucrat)
{
    return os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
}

