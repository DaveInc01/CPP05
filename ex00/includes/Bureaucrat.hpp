#ifndef BUREAUCRAT.HPP
# define BUREAUCRAT.HPP

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(){};
	Bureaucrat( const Bureaucrat &);
	Bureaucrat & operator=(const Bureaucrat &);
	~Bureaucrat(){};
	Bureaucrat(int);
	std::string getName () const;
	int getGrade() const;
	void gradeUp();
	void gradeDown();
private:
	const std::string name;
	int grade;
};

#endif
