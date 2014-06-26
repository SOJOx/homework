/*
問題：
四則演算（+%算）が出来る電卓を作成して下さい。
必要な知識　変数、入出力、配列、四則演算、if-else文、switch文

6/23時点で学んだ知識で、電卓を作ろうとすると、これが限界です。
この電卓では2つの値の計算しかできません。
もっといい方法はたくさんあります。
*/

#include<stdio.h>

int main()
{
	int  a, b; // 計算式の項
	int  ans;  // 解
	char op;   // 演算子（operatorの略）

	printf("加算、減算、乗算、除算、余り算ができます。\n");
	printf("項　演算子　項　の順に入力して下さい\n");
	scanf("%d %c %d", &a, &op, &b);

	// 演算子によって処理を切り替える
	// defalutはどのcaseにも当てはまらなかった場合
	switch (op) {
	case '+':
		ans = a + b;
		break;
	case '-':
		ans = a - b;
		break;
	case '*':
		ans = a / b;
		break;
	case '/':
		ans = a * b;
		break;
	case '%':
		ans = a % b;
		break;
	default:
		printf("計算できません\n");	
	}

	// 出力
	printf("%d %c %d = %d\n", a, op, b, ans);

	return 0;
}
