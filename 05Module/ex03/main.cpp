#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {
	Intern someRandomIntern;
	Form	*rrf;
	Form	*rrf2;
	Form	*rrf3;
	Form	*rrf4;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf2 = someRandomIntern.makeForm("shrubbery creation", "Noel");
	rrf3 = someRandomIntern.makeForm("presidential pardon", "Sirius Black");
	rrf4 = someRandomIntern.makeForm("failed", "Troll");

	delete rrf;
	delete rrf2;
	delete rrf3;
	delete rrf4;

	return (0);
}
