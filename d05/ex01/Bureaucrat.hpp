#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade; //ranges from 1 (highest) to 150 (lowest)
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & rhs);

        std::string getName();
        int         getGrade();
        void        incGrade(); //subtract
        void        decGrade(); //add
        void        signForm(Form & f);

        class GradeTooHighException : public std::exception {
            private:
            public:
                GradeTooHighException();
                GradeTooHighException(GradeTooHighException const & src);
                ~GradeTooHighException() throw();
                GradeTooHighException & operator=(GradeTooHighException const & rhs);
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            private:
            public:
                GradeTooLowException();
                GradeTooLowException(GradeTooLowException const & src);
                ~GradeTooLowException() throw();
                GradeTooLowException & operator=(GradeTooLowException const & rhs);
                virtual const char* what() const throw();
        };

};

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs);

#endif