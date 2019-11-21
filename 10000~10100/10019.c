#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, dec, ans;         // l 循環次數, dec 十進制暫存&迴圈用變數, ans 答案計數
    char str[5], count[10] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2};    // str 輸入暫存, count 16進制0~9 1的數量查表
    scanf("%d", &l);    // 輸入次數
    while(l--) {        // 循環l次
        scanf("%s", str);   // 輸入問題(字串)
        dec = atoi(str);    // 以十進制制轉為整數
        ans = 0;            // 重制計數
        while(dec) {        // 當dec不為零時
            if(dec % 2) ans++;  // 若dec為奇數, 則ans累加1
            dec >>= 1;     // dec向左移1位
        }
        printf("%d ", ans); // 輸出10進制1的個數
        ans = 0;      // 重制計數
        do ans += count[str[dec] - '0'];    //將每個位數帶入count查表
        while(str[++dec] != '\0');          //當str[dec]為結尾符\0時停止迴圈
        printf("%d\n", ans);    // 輸出16進制1的個數
    }
}