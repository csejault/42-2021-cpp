
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main ()
{
	std::cout << "CT" << std::endl;
	ClapTrap a("Jambon");
	std::cout << "ST" << std::endl;
	ScavTrap b("Scav");
	std::cout << "FT" << std::endl;
	FlagTrap	ft("ft");
	std::cout << "ST" << std::endl;
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
	ft.highFivesGuys();
}
