#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _grade2sign;
        int const           _grade2exe;
    public:
        Form(std::string name, int g2s, int g2e);
        Form();
        Form(Form const & src);
        ~Form();
        Form & operator=(Form const & rhs);

        std::string getName() const;
        bool        isSigned() const;
        int         getGrade2Sign() const;
        int         getGrade2Exe() const;
        void        beSigned(Bureaucrat & b);

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

std::ostream & operator<<(std::ostream & o, Form & rhs);

#endif