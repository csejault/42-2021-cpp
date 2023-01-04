#include "FlagTrap.hpp"

bool	FlagTrap::_verbose = true;

FlagTrap::FlagTrap( void ) : ClapTrap() {
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - Default constructor called" << COL_NORMAL <<std::endl;

	this->HitPt = 100;
	this->NrjPt = 100;
	this->AttackPt = 30;

	return;
}

FlagTrap::FlagTrap( std::string name) : ClapTrap(name) {
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - std::string constructor called" << COL_NORMAL <<std::endl;

	this->HitPt = 100;
	this->NrjPt = 100;
	this->AttackPt = 30;

	return;
}


FlagTrap::~FlagTrap( void )
{
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

FlagTrap::FlagTrap( FlagTrap const & src )
{
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

FlagTrap &	FlagTrap::operator=( FlagTrap const & rhs )
{
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.getName();
		this->HitPt = rhs.getHitPt();
		this->NrjPt = rhs.getNrjPt();
		this->AttackPt = rhs.getAttackPt();
	}

	return *this;
}

void	FlagTrap::set_verbose( bool status )
{
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	FlagTrap::_verbose = status;

	return;
}

bool	FlagTrap::get_verbose( void )
{
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] - Get _verbose" << COL_NORMAL <<std::endl;

	return (FlagTrap::_verbose);
}

void		FlagTrap::attack(std::string const & target) {
	if (FlagTrap::_verbose)
		std::cout << COL_YELLOW << "[FlagTrap] " << this->Name << " attack " << target << ", causing " << AttackPt << " points of damage!" << COL_NORMAL <<std::endl;

	return;
}

void		FlagTrap::highFivesGuys(void) const {
		std::cout << COL_YELLOW << "[FlagTrap] - " << this->Name << ": HEY! Let's do a hugh five!!!?" << COL_NORMAL <<std::endl;
	return;
}
