#include <bits/stdc++.h>
using namespace std;

char name[3][10] = {"Adrian", "Bruno", "Goran"};
char ans[3][10] = {"ABC", "BABC", "CCAABB"};
int num, score[5] = {}, mx = 0;
string str;

int main()
{
    scanf("%d", &num);
    cin >> str;

    for (int i = 0; i < num; i++)
    {
        if (str[i] == ans[0][i % 3])
        {
            score[0]++;
        }
        if (str[i] == ans[1][i % 4])
        {
            score[1]++;
        }
        if (str[i] == ans[2][i % 6])
        {
            score[2]++;
        }
    }

    mx = score[0];
    if (score[1] > mx)
    {
        mx = score[1];
    }
    if (score[2] > mx)
    {
        mx = score[2];
    }

    printf("%d", mx);
    for (int i = 0; i < 3; i++)
    {
        if (score[i] == mx)
        {
            printf("\n%s", name[i]);
        }
    }

    return 0;
}