//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=6&page=show_problem&problem=435
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    char input;
    bool state = false;
    while (cin.get(input))
    {
        if (input == '\n')
        {
            cout << ans << endl;
            ans = 0;
            state = false;
            continue;
        }
        if (isalpha(input))
        {
            if (!state)
            {
                state = true;
                ans++;
            }
        }
        else
            state = false;
    }
}