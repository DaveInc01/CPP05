#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm(){};
	ShrubberyCreationForm( const ShrubberyCreationForm &);
	const ShrubberyCreationForm & operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm(){};
	ShrubberyCreationForm(std::string);
	void execute(Bureaucrat const & executor) const;
private:
	std::string target;
};

#endif
