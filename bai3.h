#include <iostream>
#include <string>
using namespace std;

class Logger{
    private:
    string name;
    public:
    Logger() {
        name = "Default";
        cout<<"Logger " << name << " created.\n";
    }
    Logger(string name) {
        this -> name = name;
        cout<<"Looger " << name << " created.\n";
    }
    ~Logger() {
        cout<<"Logger " << name << " destroyed.\n";
    }


};