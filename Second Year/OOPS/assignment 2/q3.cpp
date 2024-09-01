#include <iostream>

using namespace std;
class q3
{
public:
    static void print()
    {
        cout << "Hello this is a static function printing " << endl;
    }
};
int main()
{
    q3::print();
    return 0;
}