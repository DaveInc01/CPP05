#include "./includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	this->grade = copy.grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
	this->grade = other.grade;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

void Bureaucrat::gradeUp(){
	this->grade += 1;
}

void Bureaucrat::gradeDown(){
	this->grade -= 1;
}
