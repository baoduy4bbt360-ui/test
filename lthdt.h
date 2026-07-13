#include <iostream>
#include <string>
using namespace std;

class student {
    private:
    string name;
    int age;
    float gpa;

    public:
    student ( string n, int a, float g): name(n), age(a), gpa(g) {}

    string getName(string a) const {
        return name;
    }
    int getAge(int a) const {
        return age;
    }
    float getGpa(float g) const {
        return gpa;
    }
    void setAge(int a) {
        if (a >= 16 && a <= 60) {
            age = a;
        }
        else {
            cout<<"Tuoi khong hop len!!!";
        }
    }
    void setGpa(float g) {
        if (g >= 0.0 && g <= 4.0) {
            gpa = g;
        }
        else {
            cout<< "Diem nhap khong hop le!!!";
        }                  

    }   
    void display() const {
         cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    }
};