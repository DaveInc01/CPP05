#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"

int main()
{
	try{
		Bureaucrat *chief = new Bureaucrat(5, "chief");
		AForm * shrubbery = new ShrubberyCreationForm("tree");
		chief->signForm(*shrubbery);
		shrubbery->execute(*chief);
		std::cout << "----------------------------------------------\n";
		AForm * robot = new RobotomyRequestForm("work");
		chief->signForm(*robot);
		robot->execute(*chief);
		std::cout << "----------------------------------------------\n";
		AForm * president = new PresidentialPardonForm("home");
		chief->signForm(*president);
		president->execute(*chief);


		delete chief;
		delete shrubbery;
		delete robot;
		delete president;
	}
	catch (AForm::GradeTooHighException & x)
	{
		std::cout << x.what() << std::endl;
	}
	catch (AForm::GradeTooLowException & x)
	{
		std::cout << x.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & x)
	{
		std::cout << x.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & x)
	{
		std::cout << x.what() << std::endl;
	}

}
