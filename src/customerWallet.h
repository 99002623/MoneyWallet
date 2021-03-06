#ifndef _customerWallet_h
#define _customerWallet_h

#include <string>
using std::string;

class customerWallet{

protected:
std::string w_custID; // Govt. ID Card Number(Pan Number and Addhar Number)
std::string w_custName;
std::string w_mobNum;
double w_balance;



public:

// Constructer - Default and Parameterized Constructer
customerWallet();
customerWallet(const string&,std::string,double);
customerWallet(const string&,std::string,std::string,double);

// Operations
void loadWallet(double);
void drawWallet(double);

//virtual functions

virtual void credit(double)=0;           //recharge or billPay
virtual void debit(double)=0;


//Getters
std:: string getCustomerName(){return w_custName;};
std:: string getMobileNum(){return w_mobNum;};
std:: string getCustomerID(){return w_custID;};
double getWalletbal(){return w_balance;};

//void display();

};   // Class defining end


#endif