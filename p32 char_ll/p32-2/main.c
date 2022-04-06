#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	ch = getchar();
	if(ch>='0'&&ch<='9'){
		printf("你輸入了數字\n");
	}
	else if(ch>'A'&&ch<='Z'){
		printf("你輸入了大寫英文\n");
	}
	else if(ch>'a'&&ch<='z'){
		printf("你輸入了小寫英文\n");
	}
	else{
		printf("你輸入了其他文字\n");
	}
	return 0;
}
