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

    int result[10][3];
    result[0][0] = matrix1[0][0];
    result[0][1] = matrix2[0][1];
    int k = 1;

    for (int i = 1; i <= matrix1[0][2]; i++)
    {
        for (int j = 1; j <= matrix2[0][2]; j++)
        {
            if (matrix1[i][1] == matrix2[j][0])
            {
                bool found = false;
                for (int x = 1; x < k; x++)
                {
                    if (result[x][0] == matrix1[i][0] && result[x][1] == matrix2[j][1])
                    {
                        result[x][2] += matrix1[i][2] * matrix2[j][2];
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    result[k][0] = matrix1[i][0];
                    result[k][1] = matrix2[j][1];
                    result[k][2] = matrix1[i][2] * matrix2[j][2];
                    k++;
                }
            }
        }
    }

    result[0][2] = k - 1;

    cout << "Product of the matrices is:\n";
    for (int l = 0; l <= result[0][2]; l++)
    {
        cout << result[l][0] << " " << result[l][1] << " " << result[l][2] << endl;
    }

    return 0;
}
