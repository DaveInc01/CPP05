#include "./includes/Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat mister(149, "Mister");
		mister.gradeDown();
		mister.gradeUp();
		mister.gradeUp();
		std::cout << mister << std::endl;
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
