/*
解1）引き算を使用して答えを出す

被除数を除数で引いていくとで、商とあまりを求める

例　被除数（割られる数）：7、除数（割る数）：3

被除数　引いた回数
 7       0
 4       1
 1       2
 -2      マイナスになるので終了

引いた回数が商に、
被除数がマイナスになる一つ手前の数が剰余（余り）になってる
*/

#include<stdio.h>

int main()
{
	// m ：被除数、n ：除数、q ：商、r：剰余
	int m = 7, n = 3, q = 0, r = 0;	
	
	// 最後にprintfするときに、値を取っておきたいので、
	// 別名の変数に入れておく
	// tmp は temporary （一時的な）の略
	int tmp = m;
	
	while (m - n > 0) {	// マイナスになったらループ終了
		m -= n;	// m = m - n の省略形
		q++;	// 引いた回数
	}
	r = m;	// 余りを代入

	printf("%d/%dは%dあまり%dです\n", tmp, n, q, r);

	return 0;
}
