/*
関数上で奇数か偶数か判別して出力するプログラムを作成して下さい。

必要な知識　変数、scanf、%算、if-else文 、関数 
*/

#include<stdio.h>

// 関数の宣言
int func(int a);

int main()
{
	// 変数の宣言
	int a;

	// 数字の入力
	scanf("%d", &a);

	// 関数の呼び出し
	func(a);

	return 0;		
}

// 偶数奇数を判別する関数
int func(int a) {
	// aを2で割ったあまりが0のとき偶数
	// aを2で割ったあまりが1のとき奇数
	if (a % 2 == 0)	printf("%dは偶数です\n", a);
	else            printf("%dは奇数です\n", a);

	return 0;
}
