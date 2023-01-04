
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main ()
{
	ClapTrap a("Jambon");
	ScavTrap b("Scav");
	ScavTrap cpy;

	a.attack("dinde");
	a.takeDamage(5);
	a.beRepaired(5);

	b.attack("dinde");
	b.takeDamage(5);
	b.beRepaired(5);
	b.guardGate();

	cpy.attack("Brosse Brutasse");
	cpy = b;
	cpy.attack("Brosse Brutasse");
	cpy.set_AttackPt(1000);
	cpy.attack("Brosse Brutasse");
}
