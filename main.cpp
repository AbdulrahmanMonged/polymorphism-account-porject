//HEADER FILES
#include "Account_util.h"
#include "Saving_account.h"
#include "Checking_account.h"
#include "Trust_account.h"


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    // DECLARING POINTERS AND INIT THEM

    Account *s_ptr1 = new Saving_account("Ahmed", 10000.0, 20.15);
    Account *t_ptr1 = new Trust_account("Abdulrahman", 5000.0 , 5.10);
    Account *c_ptr1 = new Checking_account("Omar", 200);
    Account *s_ptr2 = new Saving_account("Sameh");
    Account *c_ptr2 = new Checking_account("Adel", 246.78);
    Account *t_ptr2 = new Trust_account("Mohammed", 2000.0, 2.36);

    // VECTOR OF POINTERS

    vector<Account *> accounts_v{s_ptr1, t_ptr1, c_ptr1, s_ptr2, c_ptr2, t_ptr2};

    // ACCOUNT UTIL METHORDS

    display(accounts_v);
    for(int i{}; i < 4 ;++i) {
    withdraw(accounts_v, 200);
    }
    deposit(accounts_v, 2500);
    display(accounts_v);
    

    //REMOVING POINTERS

    delete s_ptr1;
    delete t_ptr1;
    delete c_ptr1;
    delete s_ptr2;
    delete t_ptr2;
    delete c_ptr2;

    print_line("END OF PROGRAM");


    //END OF PROGRAM
    return 0;
    }
    
    
