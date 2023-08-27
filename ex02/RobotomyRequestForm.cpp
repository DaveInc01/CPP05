#include "includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy) : target(copy.target)
{}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	target = other.target;
	return *this;
}

void execute(Bureaucrat const & executor) const{
	std::cout << executor.getName();
};
