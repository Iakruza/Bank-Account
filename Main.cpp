#include <iostream> 
#include "bank.h"
using namespace std;

int main() {
Account Account1(0);
Account Account2(0);
Account Account3(0);

cout << "Account 1 has an intial balace of: " << Account1.getBalance() << endl;

cout << "Account 2 has an intial balace of: " << Account2.getBalance() << endl;

cout << "Account 3 has an intial balace of: " << Account3.getBalance() << endl;



Account1.credit(1000);
Account2.credit(1000);
Account3.credit(1000);


cout << "\nAccount 1 has a credit balance is: "<< Account1.getBalance()<< endl;
cout << "Account 2 has a credit balance is: "<< Account2.getBalance()<< endl;
cout << "Account 3 has a credit balance is: "<< Account3.getBalance()<< endl;

Account1.debit(1000);
Account2.debit(1000);
Account3.debit(1000);
 
cout << "\nAccount 1 has a debit of: "<< Account1.getBalance()<< endl;
cout << "Account 2 has a debit of: "<< Account2.getBalance()<< endl;
cout << "Account 3 has a debit of: "<< Account3.getBalance()<< endl;

};

