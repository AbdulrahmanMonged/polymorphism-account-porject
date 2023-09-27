#include <iostream>
#include "Account_util.h"
#include "Saving_account.h"
#include "Checking_account.h"
#include "Trust_account.h"

using namespace std;



int main() {
    vector<Account> accounts_v{};
    vector<Saving_account> saving_accounts_v{};
    vector<Checking_account> checking_accs{};
    vector<Trust_account> trust_accs{};

    accounts_v.push_back(Account{"Ahmed", 1500.0});
    accounts_v.push_back(Account {"Bodyy", 16000.0});
    accounts_v.push_back(Saving_account{"Omar", 200.0, 1.0});

    saving_accounts_v.push_back(Saving_account{"Ahmed", 1000.0, 5.0});
    saving_accounts_v.push_back(Saving_account{"Bodyy"});
    saving_accounts_v.push_back(Saving_account{"Omar", 200.0, 1.0});

    checking_accs.push_back(Checking_account{"Ahmed", 1000.0});
    checking_accs.push_back(Checking_account{"Bodyy"});
    checking_accs.push_back(Checking_account{"Omar", 200.0});

    trust_accs.push_back(Trust_account{"Ahmed", 1000.0, 5.0});
    trust_accs.push_back(Trust_account{"Bodyy"});
    trust_accs.push_back(Trust_account{"Omar", 200.0, 1.0});
    


    deposit(trust_accs, 5000.0);
    for(int i{}; i <= 3 ; ++i) {
        withdraw(trust_accs, 200.0);
    }
    
    
}