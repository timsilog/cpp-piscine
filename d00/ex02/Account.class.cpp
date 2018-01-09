#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.class.hpp"

Account::Account( int initial_deposit ) {
    this->_accountIndex = Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << " index:" 
    << this->_accountIndex 
    << ";amount:"
    << this->_amount
    << ";created\n";
    return;
}

Account::~Account ( void ) {
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << " index:"
    << this->_accountIndex
    << ";amount:"
    << this->_amount
    << ";closed"
    << std::endl;
    return;
}

void    Account::makeDeposit( int deposit ) {
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_displayTimestamp();
    std::cout << " index:"
    << this->_accountIndex
    << ";p_amount:"
    << this->_amount - deposit
    << ";deposit:"
    << deposit
    << ";amount:"
    << this->_amount
    << ";nb_deposits:"
    << this->_nbDeposits
    << std::endl;
}

bool    Account::makeWithdrawal( int withdrawl ) {
    Account::_displayTimestamp();
    std::cout << " index:"
    << this->_accountIndex
    << "p_amount:"
    << this->_amount
    << ";withdrawal:";
    if (withdrawl <= this->_amount) {
        Account::_totalAmount -= withdrawl;
        Account::_totalNbWithdrawals++;
        this->_amount -= withdrawl;
        this->_nbWithdrawals++;
        std::cout << withdrawl
        << ";amount:"
        << this->_amount
        << ";nb_withdrawals:"
        << this->_nbWithdrawals
        << std::endl;
        return (true);
    }
    std::cout << "refused\n";
    return (false);
}

int     Account::checkAmount( void ) const {
    return (this->_amount);
}

void    Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << " index:"
    << this->_accountIndex
    << ";amount:"
    << this->_amount
    << ";deposits:"
    << this->_nbDeposits
    << ";withdrawals:"
    << this->_nbWithdrawals
    << std::endl;
}

int     Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int     Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int     Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << " accounts:"
    << Account::_nbAccounts
    << ";total:"
    << Account::_totalAmount
    << ";deposits:"
    << Account::_totalNbDeposits
    << ";withdrawals:"
    << Account::_totalNbWithdrawals
    << std::endl;
}

void    Account::_displayTimestamp( void ) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "["
    << 1900 + ltm->tm_year
    << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon
    << std::setfill('0') << std::setw(2) << ltm->tm_mday
    << "_"
    << std::setfill('0') << std::setw(2) << ltm->tm_hour
    << std::setfill('0') << std::setw(2) << ltm->tm_min
    << std::setfill('0') << std::setw(2) << ltm->tm_sec
    << "]";
}

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;