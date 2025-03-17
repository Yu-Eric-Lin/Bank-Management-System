#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Account {
    private:
        int account_num;
        string holder_name;
        int balance;

    public:
        Account(int num, string name, int balance);
        int getAccountNum();
        string getHolderName();
        int getBalance();
        void deposite(int amount);
        void withdraw(int amount);
        void display();
};

Account::Account(int num, string name, int balance){
    account_num = num;
    holder_name = name;
    balance = balance;
}

int Account::getAccountNum(){
    return account_num;
}

string Account::getHolderName(){
    return holder_name;
}

int Account::getBalance(){
    return balance;
}

void Account::deposite(int amount){
    balance += amount;
    cout << "now you have " << getBalance() << "in your account" << endl;
}

void Account::withdraw(int amount){
    int current = getBalance();
    if (current < amount){
        cout << "you don't have enough money to withdraw. you currently have " << current << "in your accoutn" << endl;
    }
    else{
        balance -= amount;
    }
}

void Account::display(){
    cout << "Account number: " << account_num << endl << "holder's name: " << holder_name << endl << "Balance: " << balance << endl;
}

void createAccount(vector<Account>& accounts);
void depositMoney(vector<Account>& accounts);
void withdrawMoney(vector<Account>& accounts);
void checkBalance(const vector<Account>& accounts);
void viewAllAccounts(const vector<Account>& accounts);
void saveAccountsToFile(const vector<Account>& accounts, const string& filename);
void loadAccountsFromFile(vector<Account>& accounts, const string& filename);

int main(){
    vector<Account> Accounts;
    string filename = "accounts.txt";
    while(true){
        int user_input;
        cout << "Select the following option: \n" <<
                "1. create account" << endl << 
                "2. deposite money" << endl <<
                "3. withdraw money" << endl << 
                "4. check balance" << endl <<
                "5. view all accounts" << endl <<
                "6. save accounts to file" << endl <<
                "7. load accounts from file" << endl;
        cin >> user_input;
        switch (user_input)
        {
        case 1:
            createAccount(Accounts);
            break;
        case 2:
            createAccount();
            break;
        case 3:
            createAccount();
            break;
        case 4:
            createAccount();
            break;
        case 5:
            createAccount();
            break;
        case 6:
            createAccount();
            break;
        case 7:
            createAccount();
            break;
        case 8:
            return 0;
        default:
            cout << "please enter the correct option" << endl;
            break;
        }
    }

    return 0;
}


void createAccount(vector<Account>& accounts){
    int account_num;
    string your_name;
    cout << "enter the account number that you wish to create (4 digits please): " << endl;
    cin >> account_num;
    cout << "enter your name for this acount holder's name: " << endl;
    cin >> your_name;
    Account new_account(account_num, your_name, 0);
    accounts.push_back(new_account);
}
void depositMoney(vector<Account>& accounts){
    int found = 0;
    int account_num, amount;
    cout << "enter your account number please: " << endl;
    cin >> account_num;
    for (auto account: accounts){
        if (account.getAccountNum() == account_num){
            cout << "Enter the amount you would like to depoiste: " << endl;
            cin >> amount;
            account.deposite(amount);
            found = 1;
            break;
        }
    }
    if (!found){
        cout << "account doesn't exist, please enter the correct account number or create one" << endl;
    }

}
void withdrawMoney(vector<Account>& accounts){


}
void checkBalance(const vector<Account>& accounts){


}
void viewAllAccounts(const vector<Account>& accounts){


}
void saveAccountsToFile(const vector<Account>& accounts, const string& filename){


}
void loadAccountsFromFile(vector<Account>& accounts, const string& filename){


}