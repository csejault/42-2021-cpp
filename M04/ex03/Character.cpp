/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/05 14:53:55 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

bool	Character::_verbose = true;

Character::Character( std::string name ) : _name(name) {
	if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Name constructor called" << COL_NORMAL <<std::endl;

	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
}

Character::~Character( void ) {
	int i = 0;
	if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Destructor called" << COL_NORMAL <<std::endl;
	while(i < 4)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			_inventory[i] = NULL;
		}
		i++;
	}

}

Character::Character( Character const & src ) {
	if (Character::_verbose)std::cout << COL_YELLOW << "[Character] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

Character &	Character::operator=( Character const & rhs ) {
	if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		int i = 0;
		while (i < 4)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = (rhs.getInventoryNB(i))->clone();
			i++;
		}
	}
	return *this;
}

void	Character::set_verbose( bool status ) {
	if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	Character::_verbose = status;
}

bool	Character::get_verbose( void ) {
	if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Get _verbose" << COL_NORMAL <<std::endl;
	return (Character::_verbose);
}

AMateria* Character::getInventoryNB( int idx ) const {
	if (idx >= 0 && idx < 4)
		return (this->_inventory[idx]);
	return (NULL);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	int i = 0;
	while (i < 4)
	{
		if (!this->_inventory[i])
		{
			if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Equip " << m->getType() << " in slot " << i << COL_NORMAL <<std::endl;
			this->_inventory[i] = m;
			break;
		}
		i++;
	}
}

void Character::unequip(int idx) {
	if ((idx >= 0 && idx < 4) && this->_inventory[idx])
	{
		if (Character::_verbose) std::cout << COL_YELLOW << "[Character] - Unequip " << this->_inventory[idx]->getType() << " in slot " << idx << COL_NORMAL <<std::endl;
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if ((idx >= 0 && idx < 4) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

