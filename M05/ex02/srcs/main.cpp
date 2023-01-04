
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	Bureaucrat B("M. B", 2);
	Bureaucrat A("MME. A", 149);
	ShrubberyCreationForm sc("Amazonie");
	RobotomyRequestForm rr("Frankensstein");
	PresidentialPardonForm pp("LH Osvald");

	//NOT SIGNED
	std::cout << sc << std::endl;
	std::cout << rr << std::endl;
	std::cout << pp << std::endl;

	//FAIL
	A.signForm(sc);
	A.signForm(rr);
	A.signForm(pp);

	//NOT SIGNED
	std::cout << sc << std::endl;
	std::cout << rr << std::endl;
	std::cout << pp << std::endl;

	//SUCCESS
	B.signForm(sc);
	B.signForm(rr);
	B.signForm(pp);

	//SIGNED
	std::cout << sc << std::endl;
	std::cout << rr << std::endl;
	std::cout << pp << std::endl;

	//FAIL
	B.signForm(sc);
	B.signForm(rr);
	B.signForm(pp);

	//SIGNED
	std::cout << sc << std::endl;
	std::cout << rr << std::endl;
	std::cout << pp << std::endl;

	//FAIL
	A.executeForm(sc);
	A.executeForm(rr);
	A.executeForm(pp);

	//SUCCESS
	B.executeForm(sc);
	B.executeForm(rr);
	B.executeForm(pp);
	return (0);
}
