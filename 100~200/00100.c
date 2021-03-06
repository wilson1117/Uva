#include <stdio.h>

int calc(long long num) {
	int ans = 1;						// 設定答案初始
	while(num != 1) {					// 當num為1結束計算
		if(num % 2) num = num * 3 + 1;			// 當num為奇數 num = 3num + 1
		else num /= 2;					// 當num為偶數 num = num / 2
		ans += 1;					// 次數累加
	}
	return ans;						// 輸出解果
}

int main() {
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF) {     		// 判斷檔案結尾
		printf("%d %d ", a, b);                 	// 先輸出a b
		if (a > b) {                            	// 若a > b
			a = a ^ b;
			b = a ^ b;                          	// 將a b交換
			a = a ^ b;
		}
		int max = 0, ans;                       	// 宣告最大值, 目前答案
		for(; a <= b; a ++) {				// a 到 b 迴圈
			ans = calc(a);				// 計算次數
			if (ans > max) max = ans;		// 若ans > max 將ans放入max
		}
		printf("%d\n", max);				// 輸出結果
	}
}
