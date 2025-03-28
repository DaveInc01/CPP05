# CPP MODULES

## Summary

This repository contains the modules of the C++ piscine from 42 School.

Each module is in a folder named `cppXX` where `XX` is the number of the module.

The higher the number, the more advanced the module is.

In all of these exercises, I have adhered to good coding practices, ensuring that my code is clean, readable, and efficient. All my code has been compiled using the `c++` compiler with the flags `-Wall -Wextra -Werror`, and it has been confirmed to compile with the `-std=c++98` flag as well.

## Module 05 - Repetitive Inheritance, Exceptions

- **Nested Classes**: The concept of nested classes was applied in the design of the bureaucratic machine where each Bureaucrat was treated as a class and each action or form they could fill was also a class nested within the Bureaucrat class.
- **Exception Handling**: Exception handling was extensively used in the bureaucratic machine to handle cases where a bureaucrat tries to perform an action for which they do not have the required grade. If the grade was too low, a `Form::GradeTooLowException` was thrown.
- **Memory Management**: The project required proper management of dynamically allocated memory to avoid memory leaks, especially when creating new forms or actions.

### Exercises

- **Exercise 00**: This exercise focused on creating a `Bureaucrat` class with attributes such as a constant name and a grade that ranges from 1 to 150.
- **Exercise 01**: This exercise expanded on the `Bureaucrat` class by adding a `Form` class that the bureaucrats could fill out. The `Form` class had attributes such as a constant name, a boolean indicating whether it was signed or not, and grades required to sign and execute it.
- **Exercise 02**: This exercise introduced more specific forms that the bureaucrats could fill out, such as `ShrubberyCreationForm`, `RobotomyRequestForm`, and `PresidentialPardonForm`. Each form had a specific action associated with it that the bureaucrats could execute.
- **Exercise 03**: This exercise introduced an `Intern` class that could create forms for the bureaucrats to fill out. The `Intern` class had a `makeForm` function that took in the name of a form and a target and returned a pointer to a `Form` object.
