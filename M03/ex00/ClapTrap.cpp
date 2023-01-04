#include "ClapTrap.hpp"

bool	ClapTrap::_verbose = true;

ClapTrap::ClapTrap( void )
{
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

ClapTrap::ClapTrap( std::string name) : _Name(name), _HitPt(10), _NrjPt(10), _AttackPt(0)
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
		this->_Name = rhs.get_Name();
		this->_HitPt = rhs.get_HitPt();
		this->_NrjPt = rhs.get_NrjPt();
		this->_AttackPt = rhs.get_AttackPt();
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
		std::cout << COL_YELLOW << "[ClapTrap] " << this->_Name << " attack " << target << ", causing " << _AttackPt << " points of damage!" << COL_NORMAL <<std::endl;

	return;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] " << this->_Name << " took damage, causing " << amount << " points of damage!" << COL_NORMAL <<std::endl;

	return;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (ClapTrap::_verbose)
		std::cout << COL_YELLOW << "[ClapTrap] " << this->_Name << " has been repaired of " << amount << " points!" << COL_NORMAL <<std::endl;

	return;
}

std::string	ClapTrap::get_Name( void ) const {

	return this->_Name;
}

int			ClapTrap::get_HitPt( void ) const {

	return this->_HitPt;
}

int			ClapTrap::get_NrjPt( void ) const {

	return this->_NrjPt;
}

int			ClapTrap::get_AttackPt( void ) const {

	return this->_AttackPt;
}

void		ClapTrap::set_Name( std::string name ) {

	this->_Name = name;
	return;
}

void		ClapTrap::set_HitPt( int hit ) {

	this->_HitPt = hit;
	return;
}

void		ClapTrap::set_NrjPt( int nrj ) {

	this->_NrjPt = nrj;
	return;
}

void		ClapTrap::set_AttackPt( int attack ) {

	this->_AttackPt = attack;
	return;
}

