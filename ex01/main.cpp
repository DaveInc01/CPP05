#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"

int main()
{
	try{
		Form document("report", 150, 1);
		std::cout << document << std::endl;
	}
	catch (Form::GradeTooHighException & x)
	{
		std::cout << x.what() << std::endl;
	}
	catch (Form::GradeTooLowException & x)
	{
		std::cout << x.what() << std::endl;
	}
}
