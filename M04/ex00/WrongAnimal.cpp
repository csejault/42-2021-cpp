#include "WrongAnimal.hpp"

bool	WrongAnimal::_verbose = true;

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	if (WrongAnimal::_verbose)
		std::cout << COL_YELLOW << "[WrongAnimal] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

WrongAnimal::~WrongAnimal( void )
{
	if (WrongAnimal::_verbose)
		std::cout << COL_YELLOW << "[WrongAnimal] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	if (WrongAnimal::_verbose)
		std::cout << COL_YELLOW << "[WrongAnimal] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if (WrongAnimal::_verbose)
		std::cout << COL_YELLOW << "[WrongAnimal] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->type = rhs.getType();

	return *this;
}

void	WrongAnimal::set_verbose( bool status )
{
	if (WrongAnimal::_verbose)
		std::cout << COL_YELLOW << "[WrongAnimal] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	WrongAnimal::_verbose = status;

	return;
}

bool	WrongAnimal::get_verbose( void )
{
	if (WrongAnimal::_verbose)
		std::cout << COL_YELLOW << "[WrongAnimal] - Get _verbose" << COL_NORMAL <<std::endl;

	return (WrongAnimal::_verbose);
}

std::string	WrongAnimal::getType( void ) const {

	return this->type;
}

void	WrongAnimal::getType( std::string NewType){

	this->type = NewType;
	return;
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "..." << std::endl;
	return;}
