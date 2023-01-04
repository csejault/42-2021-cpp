#include "Dog.hpp"

bool	Dog::_verbose = true;

Dog::Dog( void ) : Animal()
{
	if (Dog::_verbose)
		std::cout << COL_YELLOW << "[Dog] - Default constructor called" << COL_NORMAL <<std::endl;
	this->type = "Dog";

	return;
}

Dog::~Dog( void )
{
	if (Dog::_verbose)
		std::cout << COL_YELLOW << "[Dog] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

Dog::Dog( Dog const & src )
{
	if (Dog::_verbose)
		std::cout << COL_YELLOW << "[Dog] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	if (Dog::_verbose)
		std::cout << COL_YELLOW << "[Dog] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->type = rhs.getType();
	
	return *this;
}

void	Dog::set_verbose( bool status )
{
	if (Dog::_verbose)
		std::cout << COL_YELLOW << "[Dog] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	Dog::_verbose = status;

	return;
}

bool	Dog::get_verbose( void )
{
	if (Dog::_verbose)
		std::cout << COL_YELLOW << "[Dog] - Get _verbose" << COL_NORMAL <<std::endl;

	return (Dog::_verbose);
}

void	Dog::makeSound( void ) const {

	std::cout << "OOOUUUAAAFFFF" << std::endl;
	return;}
