//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=11&page=show_problem&problem=889
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> fib;
    vector<int>::reverse_iterator p;
    int f[] = {1, 1}, i = 0, input;
    bool show_zero;
    while (f[i % 2] <= 100000000)
    {
        fib.push_back(f[i % 2]);
        f[++i % 2] = f[0] + f[1];
    }

    scanf("%d", &i);
    while (i--)
    {
        scanf("%d", &input);
        printf("%d = ", input);
        show_zero = false;
        if (input == 0)
        {
            printf("0 (fib)\n");
            continue;
        }
        for (p = fib.rbegin(); p != fib.rend(); ++p)
        {
            if (input >= *p)
            {
                input -= *p;
                show_zero = true;
                printf("1");
            }
            else if (show_zero)
                printf("0");
        }
        printf(" (fib)\n");
    }
}