#ifndef MYEXCEPTION_HPP
# define MYEXCEPTION_HPP

#include <iostream>

class MyException : public std::exception
{
public:
	MyException(int _g) : _grade(_g){};
	// ~MyException(){};
	const int & get_grade() const;
private:
	// const char* msg;
	const int  _grade;
};



#endif
