#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"

int main()
{
	try{
		Form document("report", 15, 1);
		Bureaucrat *chief = new Bureaucrat(1, "chief");
		std::cout << document << std::endl << std::endl;
		document.beSigned(*chief);
		std::cout << document << std::endl;
		delete chief;
	}
	catch (Form::GradeTooHighException & x)
	{
		std::cout << x.what() << std::endl;
	}
	catch (Form::GradeTooLowException & x)
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
