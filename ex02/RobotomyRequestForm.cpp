#include "includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy) : AForm("RobotomyRequestForm", 72, 45), target(copy.target)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm("RobotomyRequestForm", 72, 45), target(t)
{}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	target = other.target;
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->is_signed() == false)
	{
		throw AForm::GradeTooLowException("PresidentialPardonForm: Bureaucrat is not sign in");
	}
	if (executor.getGrade() > 45)
	{
			throw (AForm::GradeTooLowException());
	}
	std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
};
