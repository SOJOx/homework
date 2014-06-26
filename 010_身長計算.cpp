/*
問題：
親の身長から子供の身長を求めるプログラムを作成しましょう。
計算式は以下のサイトに載っています。
男の子、女の子、両方出して下さい。

親の身長から子供の身長を計算する式：
http://denzo.sakura.ne.jp/archives/2005/0924_222059.htm
*/

#include<stdio.h>

int main()
{
	int father, mother; // 父親、母親の身長
	int son, daughter;	// 息子、娘の身長

	printf("父親と母親の身長を入力して下さい。\n");
	printf("father =");	scanf("%d", &father);	// 父親の身長を入力
	printf("mother =");	scanf("%d", &mother);	// 母親の身長を入力

	son = (father + mother + 13) / 2 + 2;		// 息子の身長を計算
	daughter = (father + mother - 13) / 2 + 2;	// 娘の身長を計算

	printf("息子の身長は%dぐらいです。\n", son);
	printf("娘の身長は%dぐらいです。\n", daughter);
	
	return 0;		
}
