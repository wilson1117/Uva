//Question url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1872
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    stack<int> buffer;
    while (cin >> i)
    {
        if (!i)
            break;
        cout << "The parity of ";
        while (i)
        {
            buffer.push(i & 1);
            i >>= 1;
        }
        while (!buffer.empty())
        {
            i += buffer.top();
            cout << buffer.top();
            buffer.pop();
        }
        cout << " is " << i << " (mod 2).\n";
    }
}