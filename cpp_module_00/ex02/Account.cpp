#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << std::setw(5) << "index:" << _accountIndex << ";";
    std::cout << std::setw(8) << "amount:" << _amount << ";";
    std::cout << std::setw(8) << "created" << std::endl;
};

void Account::_displayTimestamp(void)
{
    std::time_t timestamp;
    char timebuf[16];

    time(&timestamp);
    strftime(timebuf, sizeof(timebuf), "%Y%m%d_%H%M%S", localtime(&timestamp));
    std::cout << "[" << timebuf << "] ";
};

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
};
int Account::getTotalAmount(void)
{
    return (_totalAmount);
};
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
};
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
};
void Account::displayAccountsInfos(void){};
void Account::makeDeposit(int deposit)
{
    deposit = 3;
};
bool Account::makeWithdrawal(int withdrawal)
{
    withdrawal = 3;
    return false;
};
int Account::checkAmount(void) const
{
    return 1;
};
void Account::displayStatus(void) const {

};