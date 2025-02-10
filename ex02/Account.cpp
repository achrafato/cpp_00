/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:44:25 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/21 11:09:27 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <sstream>
#include <iostream>
#include <ctime>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
static int i = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

string	getFormattedTimestamp()
{
	std::time_t now = std::time(0);
	std::tm* localTime = std::localtime(&now);

	std::ostringstream oss;
	oss << '['
		<< std::setw(4) << std::setfill('0') << (localTime->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << localTime->tm_mday
		<< '_'
		<< std::setw(2) << std::setfill('0') << localTime->tm_hour
		<< std::setw(2) << std::setfill('0') << localTime->tm_min
		<< std::setw(2) << std::setfill('0') << localTime->tm_sec
		<< ']';

	return oss.str();
}

void Account::displayAccountsInfos(void)
{
	cout << getFormattedTimestamp() << " accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<endl;
}

Account::~Account()
{
	cout << getFormattedTimestamp() << " index:"<< this->_accountIndex<<";amount:"<<this->_amount<<";closed"<<endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = i;
	this->_amount = initial_deposit;
	cout << getFormattedTimestamp() << " index:"<< this->_accountIndex<<";amount:"<<initial_deposit<< ";created"<< endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	i++;
}

void	Account::displayStatus(void) const
{
	cout << getFormattedTimestamp() << " index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int prev_amount = this->_amount;
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		cout << getFormattedTimestamp() << " index:"<<this->_accountIndex<<";p_amount:"<<prev_amount<< ";withdrawal:"<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<_nbWithdrawals<<endl;
		return (1);
	}
	else
		cout << getFormattedTimestamp() << " index:"<<this->_accountIndex<<";p_amount:"<<prev_amount<< ";withdrawal:"<<"refused"<<endl;
	return (0);
}

void	Account::makeDeposit(int deposit)
{
	int prev_amount = this->_amount;
	this->_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	cout << getFormattedTimestamp() << " index:"<<this->_accountIndex<<";p_amount:"<<prev_amount<< ";deposit:"<<deposit<<";amount:"<<this->_amount<<";nb_deposits:"<<_nbDeposits<<endl;
}
