#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	ch = getchar();
	if(ch>='0'&&ch<='9'){
		printf("�A��J�F�Ʀr\n");
	}
	else if(ch>'A'&&ch<='Z'){
		printf("�A��J�F�j�g�^��\n");
	}
	else if(ch>'a'&&ch<='z'){
		printf("�A��J�F�p�g�^��\n");
	}
	else{
		printf("�A��J�F��L��r\n");
	}
	return 0;
}
