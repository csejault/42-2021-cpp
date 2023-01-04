
#include "Bureaucrat.hpp"

int main ()
{
		Bureaucrat A("TestTH", 2);
	try
	{
		std::cout << A << std::endl;
		++A;
		std::cout << A << std::endl;
		++A;
		std::cout << A << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << A << std::endl;
	}

		Bureaucrat B("TestTL", 149);
	try
	{
		std::cout << B << std::endl;
		--B;
		std::cout << B << std::endl;
		--B;
		std::cout << B << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << B << std::endl;
	}

	return (0);
}
