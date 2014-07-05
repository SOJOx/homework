/*
次のプログラムの赤色下線部を別関数にしてプログラムを作成して下さい。
関数名は自分で決めて下さい。
 
#include <stdio.h>
 
int main()
{
    int a, b, c;
 
    a = 20;
    b = 2;
 
    c = a * b;
    printf( "c = %d\n", c );
 
    return 0;
}
*/

#include <stdio.h>

// 関数の宣言
int func(int a, int b);

int main()
{
    int a, b, c;
 
    a = 20;
    b = 2;
 
    c = func(a, b);	// 関数の呼び出し
    printf( "c = %d\n", c );
 
    return 0;
}

// 関数
int func(int a, int b) {
	return (a * b);		// a*bを返り値として返す
}
