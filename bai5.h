#include <iostream>
#include <string>
using namespace std;
class Rectangle{
    private:
    const int id;
    double width, height;
    public:
    Rectangle(int id, double width, double height):id(id){
        setWidth(width);
        setHeight(height);
    }
    double area() const {
        return width*height;

    }
    double perimeter() const {
        return 2 * (width + height);
    }
    void setWidth(double width){
        if (width > 0){
            this -> width = width;
        }
        else{
            cout<<"Loi: chieu rong phai lon hon 0";
            width = 1;
        }        
    }
    void setHeight(double height) {
        if (height > 0){
            this -> height = height;
        }
        else{
            cout<<"Loi: chieu cao phai lon hon 0";
            height = 1;
        }

    }
    int getId() const{
        return id;
    }

};