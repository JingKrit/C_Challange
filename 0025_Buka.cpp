#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, temp;
    char oper;
    int sa, sb;

    cin >> a >> oper >> b;
    sa = a.size();
    sb = b.size();

    switch (oper)
    {
    case '*':
        cout << a;
        for (int i = 0; i < sb - 1; i++)
        {
            printf("0");
        }
        break;
    case '+':
        if (sa == sb)
        {
            a[0] = '2';
            cout << a;
        }
        else if (sa > sb)
        {
            a[sa - sb] = '1';
            cout << a;
        }
        else if (sa < sb)
        {
            b[sb - sa] = '1';
            cout << b;
        }
        break;
    }

    return 0;
}