/*
問題：
三角形の三辺がa、b、cで与えられています。
この三角形が成り立つかどうか確認するプログラムを作成して下さい。
必要な知識　変数、if-else文
三角形：　http://bit.ly/1uqODgQ

Wikipediaより、三つの辺の最も長い辺と他の2辺を足したものを比較したとき
最も長い辺　＜　他の2辺の和
となれば、三角形は成立する。
*/
#include<stdio.h>

int main()
{
	int a, b, c; // 三角形の3辺
	a = 3;
	b = 3;
	c = 5;

	int max;	// 最も長い辺の値
	int rest;	// 他の2辺を足した値

	if (a > b) {
		if (a > c) {	// a > b, c
			max = a;
			rest = b + c;
		} else {		// c > a, b
			max = c;
			rest = a + b;		
		}
	} else {
		if (b > c) {	// b > a, c
			max = b;
			rest = a + c;
		} else {		// c > a, b
			max = c;
			rest = a + b;
		}
	}

	// 最も長い辺　＜　他の2辺の和
	if (max < rest)	printf("三角形を作ることができます\n");
	else	printf("三角形は作れません\n");

	return 0;
}
