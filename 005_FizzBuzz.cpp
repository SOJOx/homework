/*

FizzBuzz問題（なんか偉い人が考えた問題）
I.  1から順番に数を表示する
II. その数が3で割り切れるなら"Fizz"、5で割り切れるなら"Buzz"、両方で割り切れるなら"FizzBuzz"と表示する
（"1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz ･･･"と出力される） 

*/

#include<iostream>

int main()
{
	for (int i = 1; i <= 100; i++) {

		// 5と3の両方で割ることができる = 15で割れる
		// このとき "FizzBuzz"
		if (i % 15 == 0)
			printf("FizzBuzz ");

		// 5で割ることができるとき "Buzz"
		else if (i % 5 == 0)
			printf("Buzz ");

		// 3で割ることができるとき "Fizz"
		else if (i % 3 == 0)
			printf("Fizz ");
		
		// それ以外なら数字を表示
		else
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}
