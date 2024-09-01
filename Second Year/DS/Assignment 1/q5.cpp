#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter Row and Columns: ";
    cin >> m >> n;

    int arr[m][n];

    cout << "Enter Matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Sum of Rows:\n";
    for (int i = 0; i < m; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < n; j++)
        {
            rowsum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowsum << endl;
    }

    cout << "Sum of Columns:\n";
    for (int j = 0; j < n; j++)
    {
        int colsum = 0;
        for (int i = 0; i < m; i++)
        {
            colsum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colsum << endl;
    }

    return 0;
}
