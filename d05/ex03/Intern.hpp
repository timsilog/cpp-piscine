#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & rhs);
        
        Form*    makeForm(std::string fname, std::string target);

};

#endif