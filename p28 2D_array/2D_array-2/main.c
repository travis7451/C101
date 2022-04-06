#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
