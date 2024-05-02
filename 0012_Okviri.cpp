#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int row = 0; row < 5; row++)
    {
        if (row == 0 || row == 4)
        {
            for (int i = 1; i <= str.length(); i++)
            {
                if (i % 3 == 0)
                {
                    printf("..*.");
                }
                else
                {
                    printf("..#.");
                }
                if (i == str.length())
                {
                    printf(".\n");
                }
            }
        }
        if (row == 1 || row == 3)
        {
            for (int i = 1; i <= str.length(); i++)
            {
                if (i % 3 == 0)
                {
                    printf(".*.*");
                }
                else
                {
                    printf(".#.#");
                }
                if (i == str.length())
                {
                    printf(".\n");
                }
            }
        }
        if (row == 2)
        {
            for (int i = 1; i <= str.length(); i++)
            {
                if ((i % 3 == 0 || (i - 1) % 3 == 0) && i != 1)
                {
                    printf("*.%c.", str[i - 1]);
                }
                else
                {
                    printf("#.%c.", str[i - 1]);
                }
                if (i == str.length())
                {
                    if (i % 3 == 0)
                    {
                        printf("*\n");
                    }
                    else
                    {
                        printf("#\n");
                    }
                }
            }
        }
    }

    return 0;
}