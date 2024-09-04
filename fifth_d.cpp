#include <iostream>
using namespace std;
int main()

{
    int arr[] = {2, 5, 1, 0, 3, 1, 4, 2, 7, 0};
    int k = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << arr[k] << " \t";
                k++;
            }
            else
                cout << "0" << " \t";
        }
        cout << endl;
    }
    return 0;
}