#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form(std::string("Shrubbery"), target, 145, 137) {
	std::cout << "The constructor created a ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs)
	: Form(rhs) {
	std::cout << "The copy constructor created a ShrubberyCreationForm" << std::endl;
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "The destructor destroyed a ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	if (this != &rhs) {
		Form::operator=(rhs);
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

}
