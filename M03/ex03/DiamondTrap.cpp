#include "DiamondTrap.hpp"

bool	DiamondTrap::_verbose = true;

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FlagTrap(), ScavTrap() {
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

DiamondTrap::DiamondTrap( std::string name) : ClapTrap(name + "_calp_name"), FlagTrap(name), ScavTrap(name) {
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - std::string constructor called" << COL_NORMAL <<std::endl;
	this->Name = name;
	this->HitPt = this->FlagTrap::HitPt;
	this->NrjPt = this->ScavTrap::NrjPt;
	this->AttackPt = this->FlagTrap::AttackPt;

	return;
}

DiamondTrap::~DiamondTrap( void )
{
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.getName();
		this->ClapTrap::Name = rhs.ClapTrap::getName();
		this->HitPt = rhs.getHitPt();
		this->NrjPt = rhs.getNrjPt();
		this->AttackPt = rhs.getAttackPt();
	}

	return *this;
}

void	DiamondTrap::set_verbose( bool status )
{
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	DiamondTrap::_verbose = status;

	return;
}

bool	DiamondTrap::get_verbose( void )
{
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Get _verbose" << COL_NORMAL <<std::endl;

	return (DiamondTrap::_verbose);
}

void		DiamondTrap::attack(std::string const & target) {

	return ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI( void ) {
	if (DiamondTrap::_verbose)
		std::cout << COL_YELLOW << "[DiamondTrap] - Hello, I am : " << this->Name << " and my ClapTrap name is : " << this->ClapTrap::Name << COL_NORMAL <<std::endl;
	return;
}

std::string	DiamondTrap::getName( void ) const {

	return this->Name;
}

int			DiamondTrap::getHitPt( void ) const {

	return this->HitPt;
}

int			DiamondTrap::getNrjPt( void ) const {

	return this->NrjPt;
}

int			DiamondTrap::getAttackPt( void ) const {

	return this->AttackPt;
}

void		DiamondTrap::set_Name( std::string name ) {

	this->Name = name;
	return;
}

void		DiamondTrap::set_HitPt( int hit ) {

	this->HitPt = hit;
	return;
}

void		DiamondTrap::set_NrjPt( int nrj ) {

	this->NrjPt = nrj;
	return;
}

void		DiamondTrap::set_AttackPt( int attack ) {

	this->AttackPt = attack;
	return;
}
