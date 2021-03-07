//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input[11];
    uint8_t tmp, i;
    for (;;)
    {
        scanf("%s", &input);
        if (!strcmp(input, "0"))
            break;
        while (strlen(input) != 1)
        {
            tmp = 0;
            for (i = 0; i < strlen(input); i++)
                tmp += input[i] - '0';
            sprintf(input, "%d", tmp);
        }
        cout << input << endl;
    }
}