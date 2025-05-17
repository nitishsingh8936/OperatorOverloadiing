#include<iostream>
using namespace std;

class complex{
    int real , imag;
    public:
    complex(int real , int imag){
        this->real=real;
        this->imag=imag;
    }
    void print(){
        cout<<real<<" + "<<imag<<"i";
    }
    friend complex operator+(complex a, complex b);
};

complex operator+(complex a,complex b){
    return complex(a.real + b.real , a.imag+b.imag);
}

int main(){ 
    complex a(5,6), b(6,7);
    complex c = a+b;
    c.print();
    
    return 0;
}