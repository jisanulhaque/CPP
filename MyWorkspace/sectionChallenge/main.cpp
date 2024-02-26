#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"


using namespace std;

int main(){
	
	//Account
	vector <Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"Jisan"});
	accounts.push_back(Account{"Zahid", 1500.0});
	
	display(accounts);
	deposit(accounts, 500.0);
	withdraw(accounts, 1000.0);
	
	//Savings_Account
	vector <Savings_Account> sav_accounts;
	sav_accounts.push_back(Savings_Account{});
	sav_accounts.push_back(Savings_Account{"Jico"});
	sav_accounts.push_back(Savings_Account{"Auri", 1500.0, 5});
	sav_accounts.push_back(Savings_Account{"Bistro", 500, 5});
	
	display(sav_accounts);
	deposit(sav_accounts, 300.0);
	withdraw(sav_accounts, 100.0);
	
	//Checking_Account
	vector<Checking_Account>check_account;
	check_account.push_back(Checking_Account{"MOtu", 500});
	check_account.push_back(Checking_Account{"Zahid", 400});
	check_account.push_back(Checking_Account{"Bodrul", 300});
	
	display(check_account);
	deposit(check_account, 100);
	withdraw(check_account, 100);
	
	//Trust_Account
	vector<Trust_Account>trst_account;
	trst_account.push_back(Trust_Account{"MOtu", 500, 5});
	trst_account.push_back(Trust_Account{"Zahid", 500, 5});
	trst_account.push_back(Trust_Account{"Bodrul", 500, 5});
	trst_account.push_back(Trust_Account{"Jakir", 500, 5});
	trst_account.push_back(Trust_Account{"Bokachoda", 500, 5});
	
	display(trst_account);
	deposit(trst_account, 100);
	withdraw(trst_account, 70);
	return 0;
}