/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/05 14:53:21 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

bool	Cure::_verbose = true;

Cure::Cure( void ) : AMateria("cure") {
	if (Cure::_verbose) std::cout << COL_YELLOW << "[Cure] - Default constructor called" << COL_NORMAL <<std::endl;
}

Cure::~Cure( void ) {
	if (Cure::_verbose) std::cout << COL_YELLOW << "[Cure] - Destructor called" << COL_NORMAL <<std::endl;
}

Cure::Cure( Cure const & src ) {
	if (Cure::_verbose)std::cout << COL_YELLOW << "[Cure] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

Cure &	Cure::operator=( Cure const & rhs ) {
	if (Cure::_verbose) std::cout << COL_YELLOW << "[Cure] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		AMateria::operator=(rhs);
	return *this;
}

void	Cure::set_verbose( bool status ) {
	if (Cure::_verbose) std::cout << COL_YELLOW << "[Cure] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Cure::_verbose = status;
}

bool	Cure::get_verbose( void ) {
	if (Cure::_verbose) std::cout << COL_YELLOW << "[Cure] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Cure::_verbose);
}

AMateria* Cure::clone() const {
	return(new Cure(*this));
}

void		Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

