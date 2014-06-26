#include<stdio.h>

int main()
{
	// データ
	int data[10]={29, 12, 19, 23, 62, 86, 4, 81, 3, 43};
	// 最大値：max、最小値：min
	int max, min;

	// 一番はじめの値を入れておく、
	// これが基準値となる
	max = data[0];
	min = data[0];

	for (int i = 0; i < 10; i++) {
		// maxに入っている値よりdata[i]の値が大きい場合入れ替え 
		if (max < data[i])
			max = data[i];
	
		// minに入っている値よりdata[i]の値が小さい場合入れ替え
		if (min > data[i])
			min = data[i];
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");
	printf("最大値は%d、最小値は%dです\n", max, min);

	return 0;
}
/*
流れ

i 	max	min data[i]
	29  29
0	29  29  29
1	29	29	12		12 < 29 なのでminを入れ替え
	29	12
2	29	12	19
3	29	12	23
4	29	12	62		62 > 29 なのでmaxを入れ替え
	62	12
5	62	12	86		86 > 62 なのでmaxを入れ替え
	86	12
6	86	12	 4		 4 < 12 なのでminを入れ替え
	86	 4
7	86	 4	81
8	86	 4	 3		 3 <  4 なのでminを入れ替え
	86	 3
9	86	 3	 43

となり、max、minには最大値、最小値が入る
*/
