#include <bits/stdc++.h>
using namespace std;

string str;
int small = 0, capital = 0;

int main()
{
    cin >> str;
    for (int i : str)
    {
        if (i >= 'a' && i <= 'z')
        {
            small = 1;
        }
        if (i >= 'A' && i <= 'Z')
        {
            capital = 1;
        }
    }

    if (capital == 1 && small == 0)
        printf("All Capital Letter");
    else if (capital == 0 && small == 1)
        printf("All Small Letter");
    else
        printf("Mix");

    return 0;
}