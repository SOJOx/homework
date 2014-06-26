#include<stdio.h>

int main()
{
	// 変数の宣言
	int a;

	// 数字の入力
	scanf("%d", &a);

	// aを2で割ったあまりが0のとき偶数
	// aを2で割ったあまりが1のとき奇数
	if (a % 2 == 0)	printf("%dは偶数です\n", a);
	else            printf("%dは奇数です\n", a);

	return 0;		
}
