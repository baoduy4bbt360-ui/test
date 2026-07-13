#include <iostream>
#include <string>
#include "bai3.h"
using namespace std;
int main(){
    cout<<"Khoi chay Logger tren stack.\n";
    {
        Logger stack;
        Logger stackLogger("Stack_log");
    }
    cout<<"Da ra khoi block.\n";

    cout<<"Tao doi tuong tren heap: \n";
    Logger* heapLogger = new Logger("Heap_log");

    cout<<"chuan bi xoa doi tuong tren heap: \n";
    delete heapLogger;

    return(0);
}
