#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
public:
	Form ();
	Form (const Form &);
	Form &operator=(const Form &);
	~Form (){};
	Form (const std::string, const int, const int);
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
private:
	const std::string name;
	bool  isSigned;
	const int grade_to_sign;
	const int grade_to_ex;
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif
