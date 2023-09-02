#include "includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy) : AForm("PresidentialPardonForm", 25, 5), target(copy.target)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm("PresidentialPardonForm", 25, 5), target(t)
{}

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	target = other.target;
	return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->is_signed() == false)
	{
		throw AForm::GradeTooLowException("PresidentialPardonForm: Bureaucrat is not sign in");
	}
	if (executor.getGrade() > 5)
	{
			throw (AForm::GradeTooLowException());
	}
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
