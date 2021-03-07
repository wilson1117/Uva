//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=226&page=show_problem&problem=2927
#include <bits/stdc++.h>
#include <regex>
using namespace std;

regex reg("\\d+");
smatch sm;

int gcd(int a, int b)
{
    while (b)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    string line;
    int n, gcd_max, num[100], i, j, k, l;
    scanf("%d ", &i);

    while (i--)
    {
        getline(cin, line);
        stringstream ss(line);
        j = 0;
        gcd_max = 0;
        while (ss >> num[j++])
            ;
        for (k = 0; k < j - 1; k++)
            for (l = k + 1; l < j - 1; l++)
                gcd_max = max(gcd_max, gcd(num[k], num[l]));
        printf("%d\n", gcd_max);
    }
}