#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct letter {
    char out;
    int count;
} Letter;

int compare(const void *a, const void *b);

int main() {
    int l, i = 0;
    char str[1000], buffer;
    Letter list[26];
    for(;i < 26; i++) {
        list[i].out = i + 'A';
        list[i].count = 0;
    }
    while(scanf("%d", &l) != EOF) {
        if(l == 0) break;
        for(;l >= 0;l--) {
            gets(str);
            i = 0;
            while(str[i]) {
                buffer = toupper(str[i]);
                if(buffer >= 'A' && buffer <= 'Z') list[buffer - 'A'].count++;
                i++;
            }
        }
    }
    qsort((void *)list, 26, sizeof(Letter), compare);
    for(i = 0; i < 26; i++) {
        if(list[i].count <= 0) break;
        printf("%c %d\n", list[i].out, list[i].count);
    }
}

int compare(const void *a, const void *b) {
    if(((Letter*)a)->count > ((Letter*)b)->count) return -1;
    else if(((Letter*)a)->count < ((Letter*)b)->count) return 1;
    if(((Letter*)a)->out < ((Letter*)b)->out) return -1;
    else if(((Letter*)a)->out > ((Letter*)b)->out) return 1;
}