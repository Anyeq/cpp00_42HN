/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 21:22:43 by asando            #+#    #+#             */
/*   Updated: 2026/05/25 11:06:32 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
	:	_accountIndex(_nbAccounts),
		_amount(initial_deposit),
		_nbDeposits(0),
		_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created:" << std::endl;
}

Account::~Account() {
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created:" << std::endl;
}

void	Account::_displayTimestamp() {
	std::time_t now = std::time(NULL);
	std::tm *t = std::localtime(&now);

	std::cout << "[" << (t->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') <<t->tm_mon + 1
		<< std::setw(2) << t->tm_day << "_"
		<< std::setw(2) << t->tm_hour
		<< std::setw(2) << t->tm_min
		<< std::setw(2) << t->tm_sec
		<< "] ";
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();

	std::cout << "accounts:" <<_nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposit:" << _totalNbDeposit
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void	Account::displayStatus(){
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposit:" << _nbDeposits
		<< ";withdrawals" << _totalnbwithdrawals
		<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount;

	_amount += deposit;
	_nbDeposit++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << ";deposit:" << deposit
		<< ";amount:" << _nbDeposit
		<< ";nb_deposits:" << _nbDeposits
		<< std:endl;
}

bool	Account::makeWithdrawals(int withdrawal) {
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount;

	if (withdrawal > _amount) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" <<_amount
		<< ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;

	return true;
}
