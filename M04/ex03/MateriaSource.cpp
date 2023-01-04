/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/05 15:06:07 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

bool	MateriaSource::_verbose = true;

MateriaSource::MateriaSource( void ) {
	if (MateriaSource::_verbose) std::cout << COL_YELLOW << "[MateriaSource] - Default constructor called" << COL_NORMAL <<std::endl;
	for(int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::~MateriaSource( void ) {
	if (MateriaSource::_verbose) std::cout << COL_YELLOW << "[MateriaSource] - Destructor called" << COL_NORMAL <<std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_learned[i])
			delete this->_learned[i];
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
	if (MateriaSource::_verbose)std::cout << COL_YELLOW << "[MateriaSource] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs ) {
	if (MateriaSource::_verbose) std::cout << COL_YELLOW << "[MateriaSource] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_learned[i])
				delete this->_learned[i];
			this->_learned[i] = rhs.getLearnedNB(i)->clone();
		}
	}
	return *this;
}

void	MateriaSource::set_verbose( bool status ) {
	if (MateriaSource::_verbose) std::cout << COL_YELLOW << "[MateriaSource] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	MateriaSource::_verbose = status;
}

bool	MateriaSource::get_verbose( void ) {
	if (MateriaSource::_verbose) std::cout << COL_YELLOW << "[MateriaSource] - Get _verbose" << COL_NORMAL <<std::endl;
	return (MateriaSource::_verbose);
}

AMateria* MateriaSource::getLearnedNB( int idx ) const {
	if (idx >= 0 && idx < 4)
		return (this->_learned[idx]);
	return (NULL);
}

void		MateriaSource::learnMateria(AMateria* m) {
	int i = 0;

	while (i < 4)
	{
		if (!this->_learned[i])
		{
			this->_learned[i] = m;
			break;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	AMateria* ret = NULL;
	int i = 0;

	while (i < 4)
	{
		if (this->_learned[i] && !type.compare(this->_learned[i]->getType()))
		{
			ret = this->_learned[i]->clone();
			break;
		}
		i++;
	}
	return (ret);
}
