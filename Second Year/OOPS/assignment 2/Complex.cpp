#include <iostream>

using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int a, int b) : real(a), imag(b) {}
    Complex(const Complex &obj)
    {
        real = obj.real;
        imag = obj.imag;
    }
    void display()
    {
        cout << real << "+" << imag << endl;
    }
    friend Complex sum(Complex o1, Complex o2)
    {
        Complex o3;
        o3.real = o1.real + o2.real;
        o3.imag = o1.imag + o2.imag;
        return o3;
    }
};
int main()
{
    Complex O1(1, 1);
    Complex O2(1, 1);
    Complex o3 = sum(O1, O2);
    o3.display();
    return 0;
}