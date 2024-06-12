#include <bits/stdc++.h>
using namespace std;

int main()
{
    char num[1000010];
    scanf("%s", &num);

    int temp3 = 0, temp11 = 0;
    for (int i = 0; i < strlen(num); i++)
    {
        temp3 = ((temp3 * 10) + (num[i] - '0')) % 3;
        temp11 = ((temp11 * 10) + (num[i] - '0')) % 11;
    }
    printf("%d %d", temp3, temp11);

    return 0;
}