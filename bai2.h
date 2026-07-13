#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    private:
    string ownerName;
    double balance;
    int accountId;
    public:
    BankAccount(string o,double ib , int a): ownerName (o), accountId (a) {
        if (ib > 0){
            balance = ib;
        }
        else{
            balance = 0;
        }
        
    }
    
    string getOwnerName(string a) {
        return ownerName;
    }
    int getAccountId(int a){
        return accountId;
    }
    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            cout<<"Nap thanh cong "<< amount <<"VND, so du hien tai la: "<< balance << "VND.\n";
        }
        else{
            cout<<"Loi nap tien ( "<< amount << " ) phai lon hon 0.\n";
        }
    }
    void withdraw(double amount){
        if (balance >= amount){
            balance -= amount;
            cout<<"Rut thanh cong " << amount <<"VND, so du con lai la "<< balance <<"VND.\n";
        }
        else if (amount < 0){
            cout<<"So tien nhap phai lon hon 0!!!.\n";           
        }
        else {
            cout<<"So du hien tai cua ban khong du!!!.\n";
        }

    }
    double getBalance(double b) const {
    return balance;
    }
    void Accountinfo() const {
        cout<<"Ten khach hang: "<< ownerName << endl;
        cout<<"So du tai khoan: "<< balance <<"VND"<< endl;
        cout<<"ID: "<< accountId << endl;
    }





};