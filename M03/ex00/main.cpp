
#include "ClapTrap.hpp"
int main ()
{
	ClapTrap a("CLA_A");
	ClapTrap b("CLA_B");


	a.attack("dinde");
	b.takeDamage(5);
	b.beRepaired(5);
	b.set_Name("Another name for B");
	b.takeDamage(5);
	b.beRepaired(5);
}
