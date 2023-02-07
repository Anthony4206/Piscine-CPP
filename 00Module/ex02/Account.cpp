#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>

#include "Account.hpp"

Account::Account( int initial_deposit ) {
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    std::cout << "index:" << this->_accountIndex
        << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount( void ) {    
    return (Account::_totalAmount);
}

int Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts()
        << ";total:" << Account::getTotalAmount()
        << ";deposits:" << Account::getNbDeposits()
        << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";p_amount:" << this->_amount
        << ";deposit:" << deposit;
    this->_amount += deposit;
    std::cout << ";amount:" << this->_amount
        << ";nb_deposits:" << ++this->_nbDeposits << std::endl;
        Account::_totalAmount += deposit;
        Account::_totalNbDeposits++;
}

bool    Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";p_amount:" << this->_amount;
    if (this->_amount - withdrawal < 0) {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    } else {
        std::cout << ";withdrawal:" << withdrawal;
        this->_amount -= withdrawal;
        std::cout << ";amount:" << this->_amount
            << ";nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        return (true);
    }
}

int	Account::checkAmount( void ) const {
    return (this->_amount);
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";amount:" << this->_amount
        << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp( void ) {
    time_t      time;
    struct tm   *data;

    std::time(&time);
    data = std::localtime(&time);
    std::cout << "[" << std::put_time(data, "%Y%m%d_%H%M%S") << "] ";
}
