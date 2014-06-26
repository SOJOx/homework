#include<stdio.h>

int main()
{
	// 年を入力する変数
	int year;

	// 年を入力
	scanf("%d", &year);

	if (year < 0) {
		// 西暦は0年からなので、負の数が入力されるとエラー
		printf("入力がおかしいです\n");
	} else {

		// 西暦年が4で割り切れる年は閏年
		if (year % 4 == 0) {
			
			// ただし、西暦年が100で割り切れる年は平年
			if (year % 100 == 0){
			
				//ただし、西暦としが400で割り切れる年は閏年
				if (year % 400 == 0)
					printf("%dは閏年です\n", year);
				else
					printf("%dは閏年ではありません\n", year); 
			} else {
				printf("%dは閏年です\n", year);
			}
		} else {
			printf("%dは閏年ではありません\n", year);
		}
	}

	return 0;
}
