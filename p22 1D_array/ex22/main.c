#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int score[3];
	
	for(i=0;i<3;i++){
		scanf("%d",&score[i]);
		printf("I get %d\n",score[i]); 
	}
	return 0;
}
