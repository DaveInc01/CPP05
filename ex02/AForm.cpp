#include "includes/AForm.hpp"
#include "includes/Bureaucrat.hpp"

AForm::AForm() : name("Aform"), isSigned(false), grade_to_sign(150), grade_to_ex(150){}

AForm::AForm(const AForm & copy) : name(copy.name), isSigned(copy.isSigned), grade_to_sign(copy.grade_to_sign), grade_to_ex(copy.grade_to_ex){}

AForm & AForm::operator=(const AForm & other)
{
	isSigned = other.isSigned;
	return *this;
}

AForm::AForm (const std::string n, const int g_sign, const int g_ex) : name(n), grade_to_sign(g_sign), grade_to_ex(g_ex)
{
	isSigned = false;
	if (grade_to_sign > 150)
		throw AForm::GradeTooLowException();
	else if (grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	if (grade_to_ex > 150)
		throw AForm::GradeTooLowException();
	else if (grade_to_ex < 1)
		throw AForm::GradeTooHighException();
}


std::string AForm::get_name() const
{
	return name;
}

bool AForm::get_signed() const
{
	return isSigned;
}

int AForm::get_grade_to_sign() const
{
	return grade_to_sign;
}

int AForm::get_grade_to_ex() const
{
	return grade_to_ex;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("The grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &os, AForm const &Aform)
{
    return os << "name: " << Aform.get_name()
			  << "\nisSigned: " << Aform.get_signed()
			  << "\ngrade to sign: " << Aform.get_grade_to_sign()
			  << "\ngrade to execution: " << Aform.get_grade_to_ex();
}

void AForm::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() >= this->get_grade_to_sign())
		throw(AForm::GradeTooLowException());
	this->isSigned = true;
}

void AForm::set_sign()
{
	this->isSigned = true;
}


