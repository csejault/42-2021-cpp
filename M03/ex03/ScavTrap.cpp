#include "ScavTrap.hpp"

bool	ScavTrap::_verbose = true;

ScavTrap::ScavTrap( void ) : ClapTrap(){
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - Default constructor called" << COL_NORMAL <<std::endl;

	this->_GuardKeeperMode = false;
	this->HitPt = 100;
	this->NrjPt = 50;
	this->AttackPt = 20;

	return;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) {
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - std::string constructor called" << COL_NORMAL <<std::endl;

	this->_GuardKeeperMode = false;
	this->HitPt = 100;
	this->NrjPt = 50;
	this->AttackPt = 20;

	return;
}


ScavTrap::~ScavTrap( void )
{
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs )
{
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.getName();
		this->HitPt = rhs.getHitPt();
		this->NrjPt = rhs.getNrjPt();
		this->AttackPt = rhs.getAttackPt();
		this->_GuardKeeperMode = rhs.get_GuardKeeperMode();
	}

	return *this;
}

void	ScavTrap::set_verbose( bool status )
{
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	ScavTrap::_verbose = status;

	return;
}

bool	ScavTrap::get_verbose( void )
{
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] - Get _verbose" << COL_NORMAL <<std::endl;

	return (ScavTrap::_verbose);
}

void		ScavTrap::attack(std::string const & target) {
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] " << this->Name << " attack " << target << ", causing " << AttackPt << " points of damage!" << COL_NORMAL <<std::endl;

	return;
}
void	ScavTrap::guardGate(void) {
	if (ScavTrap::_verbose)
		std::cout << COL_YELLOW << "[ScavTrap] " << this->Name << " have enterred in Gate keeper mode!" << COL_NORMAL <<std::endl;

	this->_GuardKeeperMode = true;
	return;
}

bool		ScavTrap::get_GuardKeeperMode( void ) const {

	return this->_GuardKeeperMode;
}
