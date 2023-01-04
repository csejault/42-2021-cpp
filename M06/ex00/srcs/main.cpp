#include <string>
#include "Convertor.hpp"

int main(int ac, char ** av)
{
	if (ac != 2)
		return (-1);

	Convertor * conv = new Convertor(av[1]);
	conv->print_conv();
	delete conv;
	return (0);
}
