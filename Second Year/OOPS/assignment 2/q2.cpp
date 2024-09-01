#include <iostream>
int a = 10;
using namespace std;
class A
{
public:
    static int a;
    void display()
    {
        int a = 20;
        cout << "Local : " << a << endl;
        cout << "Global :" << ::a << endl;
        cout << "Static :" << A::a << endl;
    }
};
int A::a;
int main()
{

    A::a = 30;
    A a;
    a.display();

    return 0;
}