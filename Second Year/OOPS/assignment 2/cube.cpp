
#include <iostream>
using namespace std;
inline int cube(int s) { return s * s * s; }
int main()
{
    int n;
    cout << "Enter the Cube u want to calculate" << endl;
    cin >> n;
    cout << "The cube of n is: " << cube(n) << "\n";
    return 0;
}