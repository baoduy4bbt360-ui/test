#include <iostream>
#include "lthdt.h"
#include <string>
using namespace std;
int main(){
    student s("Bao Duy", 19, 4.0);
    s.display();
    s.setAge(20);
    s.setGpa(3.5);
    
    
    return(0);
}