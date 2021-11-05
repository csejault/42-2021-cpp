/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:28:45 by csejault          #+#    #+#             */
/*   Updated: 2021/11/05 17:59:09 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
# include <iomanip>


//????????Account( void );

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	Account::_totalNbDeposits++;;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	return;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

void	Account::makeDeposit( int deposit )
{
	if (deposit <= 0)
		return;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal <= this->_amount && withdrawal > 0)
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;;
		Account::_totalNbWithdrawals++;;
		return (0);
	}
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const
{
	std::cout << "STATUS" << std::endl;
	std::cout << std::setw(21) << "Account Index|" << std::setw(21) << "Amount|" << std::setw(21) << "NB of deposits|" << std::setw(20) << "NB of withdrawals" << std::endl;
	return;
}


void	Account::_displayTimestamp( void )
{
	return;
}


Account::~Account( void )
{
	return;
}

void	Account::displayAccountsInfos( void )
{
	return;
}
