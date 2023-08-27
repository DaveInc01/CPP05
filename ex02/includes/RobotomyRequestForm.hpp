#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(){};
	RobotomyRequestForm( const RobotomyRequestForm &);
	const RobotomyRequestForm & operator=(const RobotomyRequestForm &);
	~RobotomyRequestForm(){};
	RobotomyRequestForm(std::string);
	void execute(Bureaucrat const & executor) const;
private:
	std::string target;
};

#endif
