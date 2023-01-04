#include "AAnimal.hpp"

bool	AAnimal::_verbose = true;

AAnimal::AAnimal( void ) : type("AAnimal")
{
	if (AAnimal::_verbose)
		std::cout << COL_YELLOW << "[AAnimal] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

AAnimal::~AAnimal( void )
{
	if (AAnimal::_verbose)
		std::cout << COL_YELLOW << "[AAnimal] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

AAnimal::AAnimal( AAnimal const & src )
{
	if (AAnimal::_verbose)
		std::cout << COL_YELLOW << "[AAnimal] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs )
{
	if (AAnimal::_verbose)
		std::cout << COL_YELLOW << "[AAnimal] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->type = rhs.getType();

	return *this;
}

void	AAnimal::set_verbose( bool status )
{
	if (AAnimal::_verbose)
		std::cout << COL_YELLOW << "[AAnimal] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	AAnimal::_verbose = status;

	return;
}

bool	AAnimal::get_verbose( void )
{
	if (AAnimal::_verbose)
		std::cout << COL_YELLOW << "[AAnimal] - Get _verbose" << COL_NORMAL <<std::endl;

	return (AAnimal::_verbose);
}

std::string	AAnimal::getType( void ) const {

	return this->type;
}

void	AAnimal::getType( std::string NewType){

	this->type = NewType;
	return;
}
