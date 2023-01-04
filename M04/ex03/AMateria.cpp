/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/03 18:58:45 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

bool	AMateria::_verbose = true;

AMateria::AMateria( void ) : _type("none") {
	if (AMateria::_verbose) std::cout << COL_YELLOW << "[AMateria] - Default constructor called" << COL_NORMAL <<std::endl;
}

AMateria::~AMateria( void ) {
	if (AMateria::_verbose) std::cout << COL_YELLOW << "[AMateria] - Destructor called" << COL_NORMAL <<std::endl;
}

AMateria::AMateria( AMateria const & src ) {
	if (AMateria::_verbose)std::cout << COL_YELLOW << "[AMateria] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	if (AMateria::_verbose)std::cout << COL_YELLOW << "[AMateria] - string constructor called" << COL_NORMAL <<std::endl;
}

AMateria &	AMateria::operator=( AMateria const & rhs ) {
	if (AMateria::_verbose) std::cout << COL_YELLOW << "[AMateria] - Assignation operator called" << COL_NORMAL <<std::endl;
	
	if ( this != &rhs )
		this->_type = rhs.getType();

	return *this;
}

void	AMateria::set_verbose( bool status ) {
	if (AMateria::_verbose) std::cout << COL_YELLOW << "[AMateria] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	AMateria::_verbose = status;
}

bool	AMateria::get_verbose( void ) {
	if (AMateria::_verbose) std::cout << COL_YELLOW << "[AMateria] - Get _verbose" << COL_NORMAL <<std::endl;
	return (AMateria::_verbose);
}

std::string const &	AMateria::getType() const{
	return (this->_type);
}

void		AMateria::use(ICharacter& target) {
	if (AMateria::_verbose) std::cout << COL_YELLOW << "[AMateria] - Use on " << target.getName() << COL_NORMAL <<std::endl;
}
