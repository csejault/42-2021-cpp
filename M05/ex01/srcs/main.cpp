
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat B("M. B", 2);
	Bureaucrat A("MME. A", 149);
	Form f("Formulaire B2F57", 10, 15);
	std::cout << f << std::endl;
	A.signForm(f);
	std::cout << f << std::endl;
	B.signForm(f);
	A.signForm(f);
	std::cout << f << std::endl;

	return (0);
}
