#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern(){};
	Intern( const Intern &);
	Intern & operator=(const Intern &);
	~Intern(){};
	AForm* createPresident(std::string);
	AForm* createRobotomy(std::string);
	AForm* createShrubbery(std::string);
	AForm* makeForm(std::string, std::string);
};

#endif
