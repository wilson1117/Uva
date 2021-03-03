//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1870
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int i, ans;
    for (;;)
    {
        cin >> input;
        if (input == "0")
            break;
        ans = i = 0;
        do
        {
            ans += (input[i] - '0') * (i % 2 ? 1 : -1);
        } while (input[++i] != '\0');
        if (ans % 11)
            cout << input << " is not a multiple of 11.\n";
        else
            cout << input << " is a multiple of 11.\n";
    }
}