#include <iostream>
#include <string>
using namespace std;
class Product {
    private:
    string name;
    double price;
    int quantily;
    public:
    Product(){
        name = "Unknown";
        price = 0.0;
        quantily = 0;
    }
    Product(string name, double price, int quantily){
        this -> name = name;
        this -> price = price;
        this -> quantily = quantily;
    }
    Product(string name, double price){
        this -> name = name;
        this -> price = price;
        quantily = 1;
    }
    double totalvalue(){
        return price*quantily;
    }
    void display(){
        cout<<"Ten san pham: "<< name << endl;
        cout<<"Gia san pham: "<< price << endl;
        cout<<"So luong san pham: "<< quantily << endl;
        cout<<"Tong gia tri: "<< totalvalue() << endl;
    }
};
