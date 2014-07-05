/*
shuturyokuという関数を作って、関数の中で　printf("Hello World!");　を実行してみて下さい。
関数については、こちらを参考して下さい。

Wisdomsoft　「関数」
http://wisdom.sakura.ne.jp/programming/c/c26.html
*/

#include<stdio.h>

// 関数のプロトタイプ宣言
// プロトタイプ宣言に関してはリンクを
int shuturyoku();

int main()
{
	shuturyoku();	// 出力関数の呼び出し

	return 0;		
}

// 出力関数
int shuturyoku() {
	printf("Hello World!\n");

	return 0;
}
