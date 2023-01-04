/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:28:45 by csejault          #+#    #+#             */
/*   Updated: 2021/11/09 16:56:02 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	return;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
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



int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}



int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}



void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return;
}



void	Account::makeDeposit( int deposit )
{
	int	p_amount_save;

	if (deposit >= 0)
	{
		p_amount_save = this->_amount;
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount_save << ";deposit:" << deposit << ";amount:"  << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
		return;
	}
	else
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:refused" << std::endl;

	return;
}



bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount_save;

	p_amount_save = this->_amount;
	Account::_displayTimestamp();
	if (withdrawal <= this->_amount && withdrawal > 0)
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;;
		Account::_totalNbWithdrawals++;;
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount_save << ";withdrawal:" << withdrawal << ";amount:"  << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (0);
	}
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount_save << ";withdrawal:refused" << std::endl;
	return (1);
}



int		Account::checkAmount( void ) const
{
	return (this->_amount);
}


void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}



void	Account::_displayTimestamp( void )
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer [20];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime(buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" <<buffer << "]";
	return;
}
