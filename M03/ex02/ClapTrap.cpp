#include "ClapTrap.hpp"

bool	ClapTrap::_verbose = true;

ClapTrap::ClapTrap( void ) : Name("NON_SET"), HitPt(10), NrjPt(10), AttackPt(0)
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

ClapTrap::ClapTrap( std::string name) : Name(name), HitPt(10), NrjPt(10), AttackPt(0)
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - std::string constructor called" << COL_NORMAL <<std::endl;

	return;
}

ClapTrap::~ClapTrap( void )
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		this->Name = rhs.Name;
		this->HitPt = rhs.HitPt;
		this->NrjPt = rhs.NrjPt;
		this->AttackPt = rhs.AttackPt;
	}

	return *this;
}

void	ClapTrap::set_verbose( bool status )
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	ClapTrap::_verbose = status;

	return;
}

bool	ClapTrap::get_verbose( void )
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Get _verbose" << COL_NORMAL <<std::endl;

	return (ClapTrap::_verbose);
}

void		ClapTrap::attack(std::string const & target) {
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] " << this->Name << " attack " << target << ", causing " << AttackPt << " points of damage!" << COL_NORMAL <<std::endl;

	return;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] " << this->Name << " took damage, causing " << amount << " points of damage!" << COL_NORMAL <<std::endl;

	return;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] " << this->Name << " has been repaired of " << amount << " points!" << COL_NORMAL <<std::endl;

	return;
}

std::string	ClapTrap::getName( void ) const {

	return this->Name;
}

int			ClapTrap::getHitPt( void ) const {

	return this->HitPt;
}

int			ClapTrap::getNrjPt( void ) const {

	return this->NrjPt;
}

int			ClapTrap::getAttackPt( void ) const {

	return this->AttackPt;
}

void		ClapTrap::set_Name( std::string name ) {

	this->Name = name;
	return;
}

void		ClapTrap::set_HitPt( int hit ) {

	this->HitPt = hit;
	return;
}

void		ClapTrap::set_NrjPt( int nrj ) {

	this->NrjPt = nrj;
	return;
}

void		ClapTrap::set_AttackPt( int attack ) {

	this->AttackPt = attack;
	return;
}
