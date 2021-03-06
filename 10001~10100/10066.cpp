//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=1007
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, m, i = 1, *as, *bs;
    do
    {
        cin >> a >> b;
        if (a + b == 0)
            break;
        printf("Twin Towers #%d\nNumber of Tiles : ", i);

        as = (int *)malloc(a * sizeof(int));
        bs = (int *)malloc(b * sizeof(int));
        for (n = 0; n < a; n++)
            cin >> as[n];
        for (n = 0; n < b; n++)
            cin >> bs[n];

        int **lcs = (int **)malloc((a + 1) * sizeof(int *));
        for (n = 0; n < a + 1; n++)
        {
            lcs[n] = (int *)malloc((b + 1) * sizeof(int));
            memset(lcs[n], 0, sizeof(lcs[n]));
        }

        for (n = 0; n < a; n++)
            for (m = 0; m < b; m++)
            {
                if (as[n] == bs[m])
                    lcs[n + 1][m + 1] = lcs[n][m] + 1;
                else
                    lcs[n + 1][m + 1] = max(lcs[n + 1][m], lcs[n][m + 1]);
            }
        printf("%d\n\n", lcs[a][b]);
    } while (i++);
}