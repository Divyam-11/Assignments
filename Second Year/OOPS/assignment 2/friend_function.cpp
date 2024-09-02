#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    A(int x) : a(x) {}
    friend int sum(A o1, B o2);
};
class B
{
    int b;

public:
    B(int x) : b(x) {}
    friend int sum(A o1, B o2);
};
int sum(A o1, B o2)
{
    return o1.a + o2.b;
}
int main()
{
    A o1(1);
    B o2(3);
    cout << "The sum is " << sum(o1, o2);
    return 0;
}