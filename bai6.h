#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Employee{
    private:
    string name, department;
    double salary;
    
    public:
    Employee(){
        name = "";
        department = "";
        salary = 0.0;
    }
    Employee& setName(string name){
        this -> name = name;
        return *this;
    }
    Employee& setDepartment( string department){
        this -> department = department;
        return *this;
    }
    Employee& setSalary(double salary){ 
        this -> salary = salary;
        return *this;
    }
    void display(){
        cout<<"---THONG TIN NHAN VIEN---"<< endl;
        cout<<"Ten nhan vien: "<< name << endl;
        cout<<"Phong ban: "<< department << endl;
        cout<<"Luong nhan vien: "<< fixed << setprecision(0) << salary <<" VND" << endl;    
    }

};