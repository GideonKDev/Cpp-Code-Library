#include<iostream>
using namespace std;

class Complex{
    public:  // Made public for direct access
        int real,imag;
        
        Complex() : real(0), imag(0) {}
        Complex(int r, int i) : real(r), imag(i) {}
        
        Complex operator+(const Complex& obj){
            return Complex(real+obj.real, imag+ obj.imag);
        }
};

int main(){
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1 + c2;
    
    cout << c3.real << " + i" << c3.imag << endl;
    
    return 0;
}