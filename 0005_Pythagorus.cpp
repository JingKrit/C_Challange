#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    double c = a * a + b * b;
    double d = sqrt(c);

    printf("%.6lf", d);

    return 0;
}