#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
	delete rrf;
}
