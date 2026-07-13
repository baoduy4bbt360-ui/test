#include <iostream>
#include <string>
#include "bai2.h"
using namespace std;
int main(){
    BankAccount BA("Baoduy4bbt", 1000, 17062007);
    BA.Accountinfo();
    BA.deposit(500);
    BA.deposit(-200);
    BA.withdraw(1000);
    
}
