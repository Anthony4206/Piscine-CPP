#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form(std::string("presidential pardon"), target, 25, 5) {
	std::cout << "The constructor created a PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)
	: Form(rhs) {
	std::cout << "The copy constructor created a PresidentialPardonForm" << std::endl;
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "The destructor destroyed a PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	if (this != &rhs) {
		Form::operator=(rhs);
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->getSign() || (getExecGrade() < executor.getGrade())) {
		throw ExecutionConditionInvalid();
	}

	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
