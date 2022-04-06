#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, i, j,ans;
	scanf("%d", &n);
	for(j=1;j<n;j++){
		for(i=1;i<n;i++){
			ans = i*j;
			printf("%d*%d=%d ",i,j,ans);
		}
		printf("\n");
	}
	return 0;
}
