//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1170
#include <bits/stdc++.h>
using namespace std;

int n, m, mod;

typedef struct arr
{
    uint64_t val[2][2];
    arr()
    {
        memset(val, 0, sizeof(val));
    }
    arr operator*(arr &b)
    {
        arr result;
        for (uint8_t i = 0; i < 2; i++)
            for (uint8_t j = 0; j < 2; j++)
                for (uint8_t k = 0; k < 2; k++)
                    result.val[i][j] = (result.val[i][j] + val[i][k] * b.val[k][j]) % mod;
        return result;
    }
} arr;

int main()
{
    arr result, f;
    while (cin >> n >> m)
    {
        result.val[0][0] = 0;
        result.val[1][0] = 1;
        f.val[0][0] = 0;
        f.val[0][1] = 1;
        f.val[1][0] = 1;
        f.val[1][1] = 1;
        mod = 1 << m;
        while (n)
        {
            if (n & 1)
                result = f * result;
            f = f * f;
            n >>= 1;
        }
        cout << result.val[0][0] << "\n";
    }
}