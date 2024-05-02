#include <bits/stdc++.h>
using namespace std;

int n, m, temp;
int mat[101][101];

int main()
{
    scanf("%d %d", &n, &m);
    for (int r = 0; r < 2; r++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &temp);
                mat[i][j] += temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}