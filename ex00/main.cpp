#include "./includes/Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat mister(1, "Mister");
		mister.gradeDown();
		std::cout << mister << std::endl;
		mister.gradeUp();
		mister.gradeUp();
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
