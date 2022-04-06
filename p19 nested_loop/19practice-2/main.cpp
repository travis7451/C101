#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, i, j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		for(i=0;i<n-j;i++){
		
			printf("*");
		}
		printf("\n");
		
	}
	
	return 0;
}
