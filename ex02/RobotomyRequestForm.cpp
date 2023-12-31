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
	std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator
    std::uniform_int_distribution<> dist(0, 1);
    int random_number = dist(gen);

	if (random_number == 0)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " was not robotomized in this time(" << std::endl;
}
