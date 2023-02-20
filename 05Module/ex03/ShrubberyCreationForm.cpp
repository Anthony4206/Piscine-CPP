#include <fstream>

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form(std::string("shrubbery creation"), target, 145, 137) {
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
	if (!this->getSign() || (getExecGrade() < executor.getGrade())) {
		throw ExecutionConditionInvalid();
	}
	std::ofstream output_file(getTarget() + "_shrubbery", std::ios::app);

	if (!output_file.is_open()) {
		std::cerr << "open outfile failed" << std::endl;
		exit(EXIT_FAILURE);
	}

	output_file << "       /\\       " << std::endl;
	output_file << "      /  \\      " << std::endl;
	output_file << "     /    \\     " << std::endl;
	output_file << "    /      \\    " << std::endl;
	output_file << "   /        \\   " << std::endl;
	output_file << "  /          \\  " << std::endl;
	output_file << " /            \\ " << std::endl;
	output_file << "/______  ______\\" << std::endl;
	output_file << "       ||        " << std::endl;
}
