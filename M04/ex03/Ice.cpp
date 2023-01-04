/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/04 19:00:28 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

bool	Ice::_verbose = true;

Ice::Ice( void ) : AMateria("ice") {
	if (Ice::_verbose) std::cout << COL_YELLOW << "[Ice] - Default constructor called" << COL_NORMAL <<std::endl;
}

Ice::~Ice( void ) {
	if (Ice::_verbose) std::cout << COL_YELLOW << "[Ice] - Destructor called" << COL_NORMAL <<std::endl;
}

Ice::Ice( Ice const & src ) {
	if (Ice::_verbose)std::cout << COL_YELLOW << "[Ice] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

Ice &	Ice::operator=( Ice const & rhs ) {
	if (Ice::_verbose) std::cout << COL_YELLOW << "[Ice] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		AMateria::operator=(rhs);
	return *this;
}

void	Ice::set_verbose( bool status ) {
	if (Ice::_verbose) std::cout << COL_YELLOW << "[Ice] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Ice::_verbose = status;
}

bool	Ice::get_verbose( void ) {
	if (Ice::_verbose) std::cout << COL_YELLOW << "[Ice] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Ice::_verbose);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

