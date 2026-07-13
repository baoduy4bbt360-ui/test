#include <iostream>
#include <string>
#include "bai4.h"
using namespace std;
int main(){
    Product sp1;
    Product sp2("Iphone99promaxplus", 3600000.0, 36 );
    Product sp3("Baconsoi", 300000);
    cout<<"Thong tin san pham\n";
    sp1.display();
    sp2.display();
    sp3.display();

}