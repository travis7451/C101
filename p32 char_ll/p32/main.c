#include <stdio.h>
#include <stdlib.h>
#include <wchar.h> 
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i=0;
	for(i=0;i<127;i++){
		printf("%3d:%c\n",i,i);
	}
	return 0;
}
