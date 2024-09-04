#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << arr[i] << "\t";
            }
            else
            {
                cout << "0" << " \t";
            }
                }
        cout << endl;
    }
    return 0;
}