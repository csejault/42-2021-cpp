
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap d("Diamonds Last 4EVER");
	DiamondTrap cpy;

	cpy = d;
	d.whoAmI();
	std::cout << "Name = " << d.getName() << std::endl;
	std::cout << "Clap_Name = " << d.ClapTrap::getName() << std::endl;
	std::cout << "DiamondTrap - HitPt = " << d.getHitPt() << std::endl;
	std::cout << "FlagTrap - HitPt = " << d.FlagTrap::getHitPt() << std::endl;

	std::cout << "DiamondTrap - NrjPt = " << d.getNrjPt() << std::endl;
	std::cout << "ScavTrap - NrjPt = " << d.ScavTrap::getNrjPt() << std::endl;

	std::cout << "DiamondTrap - AttackPt = " << d.getAttackPt() << std::endl;
	std::cout << "FlagTrap - AttackPt = " << d.FlagTrap::getAttackPt() << std::endl;
	d.attack("Jesus");
	d.guardGate();
	d.highFivesGuys();

	cpy.whoAmI();
	std::cout << "Name = " << cpy.getName() << std::endl;
	std::cout << "Clap_Name = " << cpy.ClapTrap::getName() << std::endl;
	std::cout << "DiamondTrap - HitPt = " << cpy.getHitPt() << std::endl;
	std::cout << "FlagTrap - HitPt = " << cpy.FlagTrap::getHitPt() << std::endl;

	std::cout << "DiamondTrap - NrjPt = " << cpy.getNrjPt() << std::endl;
	std::cout << "ScavTrap - NrjPt = " << cpy.ScavTrap::getNrjPt() << std::endl;

	std::cout << "DiamondTrap - AttackPt = " << cpy.getAttackPt() << std::endl;
	std::cout << "FlagTrap - AttackPt = " << cpy.FlagTrap::getAttackPt() << std::endl;
	cpy.attack("Jesus");
	cpy.guardGate();
	cpy.highFivesGuys();
}
