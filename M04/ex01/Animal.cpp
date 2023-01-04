#include "Animal.hpp"

bool	Animal::_verbose = true;

Animal::Animal( void ) : type("Animal")
{
	if (Animal::_verbose)
		std::cout << COL_YELLOW << "[Animal] - Default constructor called" << COL_NORMAL <<std::endl;

	return;
}

Animal::~Animal( void )
{
	if (Animal::_verbose)
		std::cout << COL_YELLOW << "[Animal] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

Animal::Animal( Animal const & src )
{
	if (Animal::_verbose)
		std::cout << COL_YELLOW << "[Animal] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	if (Animal::_verbose)
		std::cout << COL_YELLOW << "[Animal] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->type = rhs.getType();

	return *this;
}

void	Animal::set_verbose( bool status )
{
	if (Animal::_verbose)
		std::cout << COL_YELLOW << "[Animal] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	Animal::_verbose = status;

	return;
}

bool	Animal::get_verbose( void )
{
	if (Animal::_verbose)
		std::cout << COL_YELLOW << "[Animal] - Get _verbose" << COL_NORMAL <<std::endl;

	return (Animal::_verbose);
}

std::string	Animal::getType( void ) const {

	return this->type;
}

void	Animal::getType( std::string NewType){

	this->type = NewType;
	return;
}

void	Animal::makeSound( void ) const {

	std::cout << "..." << std::endl;
	return;}
