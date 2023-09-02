#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(){};
	PresidentialPardonForm( const PresidentialPardonForm &);
	const PresidentialPardonForm & operator=(const PresidentialPardonForm &);
	~PresidentialPardonForm(){};
	PresidentialPardonForm(std::string);
public:
	void execute(Bureaucrat const & executor) const;
private:
	std::string target;
};

#endif
