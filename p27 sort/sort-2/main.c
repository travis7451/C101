#include <stdio.h>
#include <stdlib.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data[N];
	int temp;
	int i,j;
	for(i=0;i<N;i++){
		scanf("%d", &data[i]);
	}
	for(j=N;j>1;j--){
		for(i=0;i<j-1;i++){
			if(data[i]>data[i+1]){
				temp = data[i];
				data[i] = data[i+1];
				data[i+1] = temp;
			}
		}
	}

	for(i=0;i<N;i++){
		printf("%d ",data[i]);
	}
	return 0;
}
