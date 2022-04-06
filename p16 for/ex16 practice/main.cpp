#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n;
	int total = 0;
	printf("¿é¤JÅÜ¼Æn:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		total = total + i;//sum+ = i;
		printf("%d",i);
		if(i<n)
			printf("+");
}
	printf("= %d\n",total);
	return 0;
}
