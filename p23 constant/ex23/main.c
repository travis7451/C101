#include <stdio.h>
#include <stdlib.h>
#define STUDENT 10//�w�q�`�� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int score[STUDENT];
	for(i=0;i<STUDENT;i++){
		scanf("%d",&score[i]);
		printf("I get%d\n",score[i]);
	}
	return 0;
}
