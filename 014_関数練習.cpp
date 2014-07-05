/*
次のプログラムの赤色下線部を別関数にしてプログラムを作成して下さい。
関数名は自分で決めて下さい。
 
#include <stdio.h>
 
int main()
{
    int a, b;
 
    a = 20;
 
    b = a * 5;
    printf( "b = %d\n", b );
 
    return 0;
}
*/

#include<stdio.h>

// 関数の宣言
// funcはfunction(関数)の略
int func(int a);

int main()
{
    int a, b;
 
    a = 20;
 
    b = func(a);	// 関数の呼び出し
    printf( "b = %d\n", b );
 
    return 0;
}

// 関数
int func(int a) {
	return  (a * 5);	// a*5した値を返り値としている
}
