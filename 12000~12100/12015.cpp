//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=25
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0, l, max, cnt, b;
    queue<string> recommends;
    string buffer;
    cin >> l;
    while (i++ < l)
    {
        cout << "Case #" << i << ":\n";
        recommends = queue<string>();
        max = 0;
        for (cnt = 0; cnt < 10; cnt++)
        {
            cin >> buffer >> b;
            if (b > max)
            {
                recommends = queue<string>();
                max = b;
                recommends.push(buffer);
            }
            else if (b == max)
            {
                recommends.push(buffer);
            }
        }
        while (!recommends.empty())
        {
            cout << recommends.front() << endl;
            recommends.pop();
        }
    }
}