#include<stdio.h>

int main()
{
	int n = 0;		// n!のn
	int ans = 1;	// 答え

	if (n < 0)	// マイナスの階乗はないのでエラー
		printf("マイナスの階乗はありませんよ\n");
	else { 
		for (int i = 1; i <= n; i++)
			ans *= i;	// 1~nまで掛けていく

		printf("%d! = %d\n", n, ans);	// 答えの出力
	}

	return 0;
}
