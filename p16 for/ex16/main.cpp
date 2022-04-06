#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	int total = 0;
	for(i=1;i<=10;i++){
		total = total + i;//sum+ = i;
		printf("i = %d,t=%d\n",i,total);
}
	printf("%d",total);
	return 0;
}
