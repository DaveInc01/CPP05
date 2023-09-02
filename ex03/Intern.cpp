#include "includes/Intern.hpp"

Intern::Intern(const Intern & copy)
{
	if(this != &copy)
		*this = copy;
}

Intern & Intern::operator=(const Intern & other)
{
	if(this != &other)
		*this = other;
	return *this;
}

AForm* Intern::createPresident(std::string t)
{
	return (new PresidentialPardonForm(t));
}

AForm* Intern::createRobotomy(std::string t)
{
	return (new RobotomyRequestForm(t));
}
AForm* Intern::createShrubbery(std::string t)
{
	return (new ShrubberyCreationForm(t));
}

int arr_pos(std::string name, std::string arr[])
{
    int len = arr->length();
    for (int i = 0; i < len; i++)
    {
        if (name == arr[i])
            return(i);
    }
    return (-1);
}

AForm * Intern::makeForm(std::string form, std::string target)
{
	Intern obj;

	AForm * (Intern::*funcPtrs[])(std::string t) = {&Intern::createRobotomy, &Intern::createPresident, &Intern::createShrubbery};
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	int pos = arr_pos(form, forms);

	if (pos >= 0 && pos <=2)
	{
		std::cout << "Intern creates " << form << " form" << std::endl;
		return (obj.*funcPtrs[pos])(target);
	}
	std::cout << "the Form is not exist!\n";
	return 0;
}

