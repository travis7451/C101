#include <stdio.h>
#include <stdlib.h>
#define CLASS 2
#define STUDENT 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int score[CLASS][STUDENT];
	for(j=0;j<CLASS;j++){
		printf("班級%d:\n",j+1);
		for (i=0; i < STUDENT;i++){
			printf("學生%d: ",i+1);
			scanf("%d",&score[j][i]);
		}
	}
	
	for(j=0; j < CLASS;j++){
		printf("班級%d:\n",j+1);
		for(i=0;i<STUDENT;i++){
			printf("學生%d: %d\n",j+1,score[j][i]);
		}
	}
	return 0;
}
