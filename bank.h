#include <iostream>



class Account //class
{
 public:

  Account(int); //initialize contructor 
  // *int data type variable
  void debit(int);//initialize debit substracts from balance, need void to avoid error type specificer for all declarations
  void credit(int);//initialize credit to add to balance
  int getBalance(); //will return the account balance


//private account for user balance
 private:
  int Balance;

}; // end of public and private classes


//user initial balance
Account::Account( int amount){

 if(amount>=0) //balance can't be less than 0
  Balance=amount;
 else
 {

Balance=0;
std::cout<<"Can't have a negative balance"<<std::endl;
 }
}

//user adds money
void Account::credit( int amount)
{
 Balance = amount + Balance; // adding money to the balance
}
void Account::debit( int amount)
{
 if(Balance>=amount)
 {
  Balance = Balance - amount;
 }
 else
 {
  std::cout<<"The Debit shouldn't exceed the account Balance"<<std::endl; //can't have negative balance
 }
}
int Account::getBalance(){ //will retrieve account Balance


 return Balance; //returns the balance for the user account
}
