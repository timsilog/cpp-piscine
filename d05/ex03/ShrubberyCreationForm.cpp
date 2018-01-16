#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137) {
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137) {
    this->_target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    this->_target = rhs._target;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    (void)executor;
    std::ofstream   ofs(this->_target + "_shrubbery");
    ofs << "          &&& &&  & &&\n"
        << "      && &\\/&\\|& ()|/ @, &&\n"
        << "      &\\/(/&/&||/& /_/)_&/_&\n"
        << "   &() &\\/&|()|/&\\/ \'%\" & ()\n"
        << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
        << " &&   && & &| &| /& & % ()& /&&\n"
        << " ()&_---()&\\&\\|&&-&&--%---()~\n"
        << "     &&     \\|||\n"
        << "             |||\n"
        << "             |||\n"
        << "             |||\n"
        << "       , -=-~  .-^- _\"\n\n";
    ofs << "              &&& &&  & &&\n"
        << "          && &\\/&\\|& ()|/ @, &&\n"
        << "          &\\/(/&/&||/& /_/)_&/_&\n"
        << "       &() &\\/&|()|/&\\/ \'%\" & ()\n"
        << "      &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
        << "     &&   && & &| &| /& & % ()& /&&\n"
        << "     ()&_---()&\\&\\|&&-&&--%---()~\n"
        << "         &&     \\|||\n"
        << "                 |||\n"
        << "                 |||\n"
        << "                 |||\n"
        << "           , -=-~  .-^- _\"\n";
}