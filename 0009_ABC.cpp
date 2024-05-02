#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
string str;
int temp;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());

    cin >> str;
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vec[str[i] - 'A']);
    }

    return 0;
}