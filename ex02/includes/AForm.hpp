#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
// class Bureaucrat;

class AForm
{
public:
	AForm ();
	AForm (const AForm &);
	AForm &operator=(const AForm &);
	virtual ~AForm (){};
	AForm (const std::string, const int, const int);
public:
	std::string get_name() const;
	bool  get_signed() const;
	int get_grade_to_sign() const;
	int get_grade_to_ex() const;
public:
	struct GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	struct GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
	void beSigned(Bureaucrat &);
	void set_sign();
	virtual void execute(Bureaucrat const & executor) const = 0;
private:
	const std::string name;
	bool  isSigned;
	const int grade_to_sign;
	const int grade_to_ex;
};

std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif
