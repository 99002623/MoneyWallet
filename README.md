# Money Wallet 

![Build](https://github.com/99002623/MoneyWallet/workflows/Build/badge.svg)     ![Unit Test](https://github.com/99002623/MoneyWallet/workflows/Unit%20Test/badge.svg)   [![Codacy Badge](https://app.codacy.com/project/badge/Grade/f974a6148d5341c6827d731ab84eb6ee)](https://www.codacy.com/gh/99002623/MoneyWallet/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=99002623/MoneyWallet&amp;utm_campaign=Badge_Grade) ![cppcheck](https://github.com/99002623/MoneyWallet/workflows/cppcheck/badge.svg)   ![Valgrind](https://github.com/99002623/MoneyWallet/workflows/Valgrind/badge.svg)

This is MoneyWallet which provides the Money Remittance service to the customers to transfer  or withdraw the funds to Bank account from the Wallet.

## Commands
0. Clean files `make clean`
1. Build `make build`
1. Unit Testing `make runGtest`
2. static analysis `make cppCheck`
3. Dynamic Analysis `make valgrind`


## File System
* [Makefile](Makefile) used for building by shell commands
* [Cmake File](CmakeLists.txt) used for debugging
* Source Codes 
    * [Customer Wallet declaration](src/customerWallet.h)
    * [Customer Wallet definition](src/customerWallet.cpp)
    * [Money Remittance declaration](src/moneyRemittance.h)
    * [Money Remittance definition](src/moneyRemittance.cpp)
    * [Transactions Declaration](src/transactions.h)
    * [Transactions Definition](src/transactions.cpp)
* [DataSet](bankDatabase.csv)