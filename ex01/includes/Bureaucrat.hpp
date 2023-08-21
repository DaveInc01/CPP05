#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat( const Bureaucrat &);
	Bureaucrat & operator=(const Bureaucrat &);
	~Bureaucrat(){};
	Bureaucrat(int);
	Bureaucrat(int, const std::string);
	Bureaucrat(const std::string);
	std::string getName () const;
	int getGrade() const;
	void gradeUp();
	void gradeDown();
	struct GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	struct GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif
