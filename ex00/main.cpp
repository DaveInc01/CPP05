#include "./includes/Bureaucrat.hpp"
#include "includes/MyException.hpp"
#include <iostream>
#include <fstream>
#include <exception>


// void Foo(int x){
// 	if (x == 0)
// 	{
// 		throw x;
// 	}
// 	if (x < 0)
// 		throw "x < 0, string exception";
// 	std::cout << "x is greater than 0\n";
// }


int main()
{
		Bureaucrat mister(1);
	try{
		mister.gradeDown();
	}
	catch (MyException & x)
	{
		if (x.get_grade() > 150)
			std::cout << "The grade is bigger than 150\n" << x.get_grade() <<  std::endl;
		else if (x.get_grade() < 1)
			std::cout <<"The grade is lower than 1\n" << x.get_grade() <<  std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	catch(...)
	{
		std::cout << "Unknown type error" << std::endl;
	}


	// using namespace std;

	// std::ifstream fin;
	// fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	// std::string path = "book.txt";

	// try
	// {
	// 	cout << "trying to open the file " << path << std::endl;
	// 	fin.open(path);
	// 	std::cout << "the file was opened successfully\n";
	// }
	// catch( std::exception & e)
	// {
	// 	std::cout << e.what() << endl;
	// 	cout << "Catching the error occured with opening the file\n";
	// }
	// try
	// {
	// 	Foo(-20);
	// }
	// catch(std::exception & x)
	// {
	// 	std::cout << "the value is less than 0, please change it\n" << x.what() <<std::endl;
	// }
	// catch(int & x)
	// {
	// 	std::cout << "Catched integer " << x << std::endl <<std::endl;
	// }
	// catch(...)
	// {
	// 	std::cout << "we dont know the type of exception\n";
	// }
}
