//url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=9&page=show_problem&problem=680
#include <bits/stdc++.h>
using namespace std;

const map<char, char> mapping = {{'B', '1'}, {'P', '1'}, {'F', '1'}, {'V', '1'}, {'C', '2'}, {'S', '2'}, {'K', '2'}, {'G', '2'}, {'J', '2'}, {'Q', '2'}, {'X', '2'}, {'Z', '2'}, {'D', '3'}, {'T', '3'}, {'L', '4'}, {'M', '5'}, {'N', '5'}, {'R', '6'}};
int main()
{
    map<char, char>::const_iterator m;
    char input[21], prev;
    int8_t i, cnt;
    printf("         NAME                     SOUNDEX CODE\n");
    while (cin >> input)
    {
        printf("         %-25s%c", input, input[0]);
        i = cnt = 0;
        prev = mapping.find(input[0])->second;
        while (input[++i])
        {
            m = mapping.find(input[i]);
            if (prev == m->second)
                continue;
            if (m != mapping.end())
            {
                printf("%c", m->second);
                if (++cnt == 3)
                    break;
            }
            prev = m->second;
        }
        while (cnt++ < 3)
            printf("0");
        printf("\n");
    }
    printf("                   END OF OUTPUT\n");
}