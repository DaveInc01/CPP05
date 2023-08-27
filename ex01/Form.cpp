#include "includes/Form.hpp"
#include "includes/Bureaucrat.hpp"

Form::Form() : name("form"), isSigned(false), grade_to_sign(150), grade_to_ex(150){}

Form::Form(const Form & copy) : name(copy.name), isSigned(copy.isSigned), grade_to_sign(copy.grade_to_sign), grade_to_ex(copy.grade_to_ex){}

Form & Form::operator=(const Form & other)
{
	isSigned = other.isSigned;
	return *this;
}

Form::Form (const std::string n, const int g_sign, const int g_ex) : name(n), grade_to_sign(g_sign), grade_to_ex(g_ex)
{
	isSigned = false;
	if (grade_to_sign > 150)
		throw Form::GradeTooLowException();
	else if (grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_ex > 150)
		throw Form::GradeTooLowException();
	else if (grade_to_ex < 1)
		throw Form::GradeTooHighException();
}


std::string Form::get_name() const
{
	return name;
}

bool Form::get_signed() const
{
	return isSigned;
}

int Form::get_grade_to_sign() const
{
	return grade_to_sign;
}

int Form::get_grade_to_ex() const
{
	return grade_to_ex;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("The grade is too high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
    return os << "name: " << form.get_name()
			  << "\nisSigned: " << form.get_signed()
			  << "\ngrade to sign: " << form.get_grade_to_sign()
			  << "\ngrade to execution: " << form.get_grade_to_ex();
}

void Form::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() >= this->get_grade_to_sign())
		throw(Form::GradeTooLowException());
	this->isSigned = true;
}

void Form::set_sign()
{
	this->isSigned = true;
}


