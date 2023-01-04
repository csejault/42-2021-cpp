#include "Cat.hpp"

bool	Cat::_verbose = true;

Cat::Cat( void ) : Animal()
{
	if (Cat::_verbose)
		std::cout << COL_YELLOW << "[Cat] - Default constructor called" << COL_NORMAL <<std::endl;
	this->type = "Cat";

	return;
}

Cat::~Cat( void )
{
	if (Cat::_verbose)
		std::cout << COL_YELLOW << "[Cat] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

Cat::Cat( Cat const & src )
{
	if (Cat::_verbose)
		std::cout << COL_YELLOW << "[Cat] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	if (Cat::_verbose)
		std::cout << COL_YELLOW << "[Cat] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		this->type = rhs.getType();
	
	return *this;
}

void	Cat::set_verbose( bool status )
{
	if (Cat::_verbose)
		std::cout << COL_YELLOW << "[Cat] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	Cat::_verbose = status;

	return;
}

bool	Cat::get_verbose( void )
{
	if (Cat::_verbose)
		std::cout << COL_YELLOW << "[Cat] - Get _verbose" << COL_NORMAL <<std::endl;

	return (Cat::_verbose);
}

void	Cat::makeSound( void ) const {

	std::cout << "MMMMIIIIAAAAOOOUUUUUU" << std::endl;
	return;}
