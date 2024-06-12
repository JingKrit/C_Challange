#include <bits/stdc++.h>
using namespace std;

struct team
{
    string name;
    int goal, point;
};

bool compare(const team &a, const team &b)
{
    if (a.point == b.point)
    {
        return a.goal > b.goal;
    }
    return a.point > b.point;
}

int main()
{
    string str;
    vector<team> vec(5);
    int score[5][5];

    for (int i = 0; i < 4; i++)
    {
        cin >> str;
        vec[i].name = str;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (score[i][j] > score[j][i])
            {
                vec[i].point += 3;
            }
            else if (score[i][j] < score[j][i])
            {
                vec[j].point += 3;
            }
            else
            {
                vec[i].point += 1;
                vec[j].point += 1;
            }
            vec[i].goal += score[i][j];
            vec[j].goal += score[j][i];
        }
    }

    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < 4; i++)
    {
        cout << vec[i].name;
        printf(" %d\n", vec[i].point);
    }

    return 0;
}