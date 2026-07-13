#include <iostream>
#include <string>
#include "bai5.h"
using namespace std;
int main(){
    Rectangle rl1(101, 2.0, 5.0 );
    cout<<"ID: "<< rl1.getId() << endl;
    cout<<"Dien tich: "<< rl1.area() << endl;
    cout<<"Chu vi: "<< rl1.perimeter() << endl;
return(0);
}