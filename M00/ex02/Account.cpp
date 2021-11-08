/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:28:45 by csejault          #+#    #+#             */
/*   Updated: 2021/11/08 14:10:17 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _nbWithdrawals(0), _accountIndex(_nbAccounts + 1), _amount(initial_deposit), _nbDeposits(1)
{
	std::cout << "=== Account created ===" << std::endl;
	Account::_totalNbDeposits++;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->displayStatus();
	std::cout << std::endl;
	return;
}

Account::~Account( void )
{
	std::cout << "=== Account destroyed === " << this->_accountIndex << std::endl;
	Account::_nbAccounts--;
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
	std::cout << "=== New deposit === + " << deposit << std::endl;
	this->displayStatus();
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
		std::cout << "=== New withdrawal === - " << withdrawal << std::endl;
		this->displayStatus();
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
	std::cout << "=== Account status === (" << this->_accountIndex << ")" << std::endl;
	Account::_displayTimestamp();
	std::cout << std::setw(21) << "Account Index|" << std::setw(21) << "Amount|" << std::setw(21) << "NB of deposits|" << std::setw(20) << "NB of withdrawals" << std::endl;
	std::cout << std::setw(20) << this->_accountIndex << "|" << std::setw(20) << this->_amount << "|" << std::setw(20) << this->_nbDeposits << "|" <<  std::setw(20) << this->_nbWithdrawals << std::endl;
	std::cout << std::endl;
	return;
}


void	Account::_displayTimestamp( void )
{
	using namespace std::chrono;

	system_clock::time_point today = system_clock::now();

	time_t tt;

	tt = system_clock::to_time_t ( today );
	std::cout << "timestamp: " << ctime(&tt) << std::endl;
	return;
}


void	Account::displayAccountsInfos( void )
{
	std::cout << "=== Accounts infos ===" << std::endl;
	Account::_displayTimestamp();
	std::cout << std::setw(21) << "NB Accounts|" << std::setw(21) << "Total Amount|" << std::setw(21) << "Total deposits|" << std::setw(20) << "Total withdrawals" << std::endl;
	std::cout << std::setw(20) << Account::_nbAccounts << "|" << std::setw(20) << Account::_totalAmount << "|" << std::setw(20) << Account::_totalNbDeposits << "|" <<  std::setw(20) << Account::_totalNbWithdrawals << std::endl;
	std::cout << std::endl;
	return;
}
