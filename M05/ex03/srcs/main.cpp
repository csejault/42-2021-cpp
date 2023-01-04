
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern intern;
	Bureaucrat B("M. B", 2);
	Bureaucrat A("MME. A", 149);
	AForm * sc = NULL;
	AForm * rr = NULL;
	AForm * pp = NULL;
	AForm * Fail = NULL;
	try
	{
		sc = intern.makeForm("ShrubberyCreationForm", "Amazonie");
		rr = intern.makeForm("RobotomyRequestForm", "Frankenstein");
		pp = intern.makeForm("PresidentialPardonForm", "LH Osvald");
		Fail = intern.makeForm("sddsgdfffg", "LH Osvald");
	}
	catch (std::exception &e)
	{
		std::cout << COL_RED << e.what() << COL_NORMAL << std::endl;
	}

	//NOT SIGNED
	std::cout << *sc << std::endl;
	std::cout << *rr << std::endl;
	std::cout << *pp << std::endl;

	//FAIL
	A.signForm(*sc);
	A.signForm(*rr);
	A.signForm(*pp);

	//NOT SIGNED
	std::cout << *sc << std::endl;
	std::cout << *rr << std::endl;
	std::cout << *pp << std::endl;

	//SUCCESS
	B.signForm(*sc);
	B.signForm(*rr);
	B.signForm(*pp);

	//SIGNED
	std::cout << *sc << std::endl;
	std::cout << *rr << std::endl;
	std::cout << *pp << std::endl;

	//FAIL
	B.signForm(*sc);
	B.signForm(*rr);
	B.signForm(*pp);

	//SIGNED
	std::cout << *sc << std::endl;
	std::cout << *rr << std::endl;
	std::cout << *pp << std::endl;

	//FAIL
	A.executeForm(*sc);
	A.executeForm(*rr);
	A.executeForm(*pp);

	//SUCCESS
	B.executeForm(*sc);
	B.executeForm(*rr);
	B.executeForm(*pp);

	delete sc;
	delete rr;
	delete pp;
	return (0);
}
