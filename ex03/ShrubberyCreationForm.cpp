#include "includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy) :  AForm("ShrubberyCreationForm", 145, 137), target(copy.target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm("ShrubberyCreationForm", 145, 137), target(t)
{}

const ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	target = other.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (this->is_signed() == false)
	{
		throw AForm::GradeTooLowException("ShrubberyCreationForm: Bureaucrat is not sign in");
	}
	if (executor.getGrade() > 137)
	{
			throw (AForm::GradeTooLowException());
	}
	std::ofstream outfile (this->target + "_shrubbery");
	outfile << "    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n" << std::endl;
	outfile.close();
}

