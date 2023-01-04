#include "Brain.hpp"

bool	Brain::_verbose = true;

Brain::Brain( void )
{
	if (Brain::_verbose)
		std::cout << COL_YELLOW << "[Brain] - Default constructor called" << COL_NORMAL <<std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = "idea_";
		i++;
	}

	return;
}

Brain::~Brain( void )
{
	if (Brain::_verbose)
		std::cout << COL_YELLOW << "[Brain] - Destructor called" << COL_NORMAL <<std::endl;

	return;
}

Brain::Brain( Brain const & src )
{
	if (Brain::_verbose)
		std::cout << COL_YELLOW << "[Brain] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;

	return;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	if (Brain::_verbose)
		std::cout << COL_YELLOW << "[Brain] - Assignation operator called" << COL_NORMAL <<std::endl;


	if ( this != &rhs )
	{
		int i = 0;
		while (i < 100)
		{
			this->ideas[i] = rhs.GetIdeasNb(i);
			i++;
		}
	}
	return *this;
}

void	Brain::set_verbose( bool status )
{
	if (Brain::_verbose)
		std::cout << COL_YELLOW << "[Brain] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;

	Brain::_verbose = status;

	return;
}

bool	Brain::get_verbose( void )
{
	if (Brain::_verbose)
		std::cout << COL_YELLOW << "[Brain] - Get _verbose" << COL_NORMAL <<std::endl;

	return (Brain::_verbose);
}

std::string		Brain::GetIdeasNb( int nb ) const {
	return (this->ideas[nb]);}
		
void	Brain::SetIdeasNb(int nb, std::string new_idea ) {

	this->ideas[nb] = new_idea;
};

