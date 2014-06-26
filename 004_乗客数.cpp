#include<stdio.h>

int main()
{
	// 各車両の乗車人数
	int a[5] = {5, 6, 1, 3, 0};
	// 車両の合計乗車人数
	int total = 0;

	// for文を使って添字を変化させれば、
	// 配列の各値を取り出せる
	// a += b　は　a = a + b　の省略形
	for (int i = 0; i < 5; i++)
		total += a[i];

	// 出力
	// ただ値を書き出してるだけ
	for (int i = 0; i < 5; i++)
		printf("%d車両目：%d人\n", i, a[i]);
	
	printf("合計%d人です\n", total);

	return 0;		
}
