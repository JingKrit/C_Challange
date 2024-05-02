#include <bits/stdc++.h>
using namespace std;

int main()
{
    int glass[3] = {1, 0, 0};
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        switch (str[i])
        {
        case 'A':
            swap(glass[0], glass[1]);
            break;
        case 'B':
            swap(glass[1], glass[2]);
            break;
        case 'C':
            swap(glass[0], glass[2]);
            break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (glass[i] == 1)
        {
            printf("%d", i + 1);
            break;
        }
    }

    return 0;
}