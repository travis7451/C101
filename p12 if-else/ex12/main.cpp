#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int score;
	printf("��J�A������:");
	scanf("%d",&score);
	if(score<60){
		printf("���ή�\n");
	}
	else{
		printf("�ή�\n");
	}
	return 0;
}
