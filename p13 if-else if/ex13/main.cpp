#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int score, n;
	printf("(1)�j�ǳ�(2)��s��:");
	scanf("%d",&n);
	printf("��J�A������:");
	scanf("%d",&score);
	if(score < 60 && n == 1){
		printf("���ή�\n");
	}
	else if(score < 70 && n == 2){
		printf("���ή�\n");
	}
	else{
		printf("�ή�\n");
	}
	return 0;
}
