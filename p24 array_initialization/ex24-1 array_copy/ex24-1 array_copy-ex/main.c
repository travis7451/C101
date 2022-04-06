#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5] = {1,2,3,4,5};
	int b[5];
	
	memcpy(b,a, sizeof(int)*5);//memcpy(目標陣列,來源陣列,sizeof(型態)*個數); 
	return 0;
}
