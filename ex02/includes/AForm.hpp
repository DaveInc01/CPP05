#ifndef AFORM_HPP
# define AFORM_HPP

#include <fstream>
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
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException( const char * );
		const char* what() const throw();
	private:
		const char *s;
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException( const char * );
		const char* what() const throw();
	private:
		const char *s;
	};
	// struct GradeTooHighException : public std::exception{
	// 	const char* what() const throw();
	// };
	// struct GradeTooLowException : public std::exception{
	// 	const char* what() const throw();
	// };
	void beSigned(Bureaucrat &);
	void set_sign();
	bool is_signed() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
private:
	const std::string name;
	bool  isSigned;
	const int grade_to_sign;
	const int grade_to_ex;
};

std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif
