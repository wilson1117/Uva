//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=117&page=show_problem&problem=2843
#include <bits/stdc++.h>
using namespace std;

int8_t maper[10] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

int main()
{
    int i;
    int8_t n, ans;
    char tmp[4];
    scanf("%d", &i);
    while (i--)
    {
        ans = 0;
        for (n = 0; n < 4; n++)
        {
            scanf("%s", &tmp);
            ans += maper[tmp[0] - '0'];
            ans += tmp[1] - '0';
            ans += maper[tmp[2] - '0'];
            ans += tmp[3] - '0';
        }
        if (ans % 10)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
}