#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    int arr[] = {1, 1, 1, 2, 8, 1, 7, 3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j || i == j + 1 || i == j - 1)
            {
                cout << arr[k] << " \t";
                k++;
            }
            else
            {
                cout << 0 << " \t";
            }
                }
        cout << endl;
    }

    return 0;
}