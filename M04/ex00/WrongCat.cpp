#include "WrongCat.hpp"

bool	WrongCat::_verbose = true;

WrongCat::WrongCat( void ) : WrongAnimal()
{
	if (WrongCat::_verbose)
		std::cout << COL_YELLOW << "[WrongCat] - Default constructor called" << COL_NORMAL <<std::endl;
	this->type = "WrongCat";

	return;
}

WrongCat::~WrongCat( void )
{
	if (WrongCat::_verbose)
		std::cout << COL_YELLOW << "[WrongCat] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

WrongCat::WrongCat( WrongCat const & src )
{
	if (WrongCat::_verbose)
		std::cout << COL_YELLOW << "[WrongCat] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	if (WrongCat::_verbose)
		std::cout << COL_YELLOW << "[WrongCat] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->type = rhs.getType();
	
	return *this;
}

void	WrongCat::set_verbose( bool status )
{
	if (WrongCat::_verbose)
		std::cout << COL_YELLOW << "[WrongCat] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	WrongCat::_verbose = status;

	return;
}

bool	WrongCat::get_verbose( void )
{
	if (WrongCat::_verbose)
		std::cout << COL_YELLOW << "[WrongCat] - Get _verbose" << COL_NORMAL <<std::endl;

	return (WrongCat::_verbose);
}

void	WrongCat::makeSound( void ) const {

	std::cout << "MMMMIIIIAAAAOOOUUUUUU" << std::endl;
	return;}
