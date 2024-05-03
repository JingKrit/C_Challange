#include <bits/stdc++.h>
using namespace std;

vector<int> vec;
int num, ans;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num);
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());
    printf("%d", vec[0] * vec[2]);

    return 0;
}