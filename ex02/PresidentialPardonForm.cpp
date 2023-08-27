#include "includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy) : target(copy.target)
{}

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	target = other.target;
	return *this;
}

// void PresidentialPardonForm::execute(Bureaucrat const & executor) const
// {
// 	if (executor.)
// }

void execute(Bureaucrat const & executor) const{
	// std::cout << executor.getName();
};
