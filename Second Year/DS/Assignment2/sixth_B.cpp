#include <iostream>
using namespace std;

int main()
{
    int matrix1[4][3] = {
        {3, 3, 4},
        {0, 1, 5},
        {1, 0, 3},
        {2, 2, 7}};

    int matrix2[4][3] = {
        {3, 3, 4},
        {0, 0, 2},
        {1, 0, 3},
        {2, 1, 4}};

    int result[7][3];
    result[0][0] = matrix1[0][0];
    result[0][1] = matrix1[0][1];

    int i = 1, j = 1, k = 1;
    while (i <= matrix1[0][2] && j <= matrix2[0][2])
    {
        if (matrix1[i][0] == matrix2[j][0] && matrix1[i][1] == matrix2[j][1])
        {
            result[k][0] = matrix1[i][0];
            result[k][1] = matrix1[i][1];
            result[k][2] = matrix1[i][2] + matrix2[j][2];
            i++;
            j++;
            k++;
        }
        else if ((matrix1[i][0] < matrix2[j][0]) ||
                 (matrix1[i][0] == matrix2[j][0] && matrix1[i][1] < matrix2[j][1]))
        {
            result[k][0] = matrix1[i][0];
            result[k][1] = matrix1[i][1];
            result[k][2] = matrix1[i][2];
            i++;
            k++;
        }
        else
        {
            result[k][0] = matrix2[j][0];
            result[k][1] = matrix2[j][1];
            result[k][2] = matrix2[j][2];
            j++;
            k++;
        }
    }

    while (i <= matrix1[0][2])
    {
        result[k][0] = matrix1[i][0];
        result[k][1] = matrix1[i][1];
        result[k][2] = matrix1[i][2];
        i++;
        k++;
    }

    while (j <= matrix2[0][2])
    {
        result[k][0] = matrix2[j][0];
        result[k][1] = matrix2[j][1];
        result[k][2] = matrix2[j][2];
        j++;
        k++;
    }

    result[0][2] = k - 1;

    cout << "Sum of the matrices is:\n";
    for (int l = 0; l <= result[0][2]; l++)
    {
        cout << result[l][0] << " " << result[l][1] << " " << result[l][2] << endl;
    }

    return 0;
}
