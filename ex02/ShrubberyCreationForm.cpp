#include "includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy) : target(copy.target)
{}

const ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	target = other.target;
	return *this;
}

void execute(Bureaucrat const & executor) const{
	std::cout << executor.getName();
};
