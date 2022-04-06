#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char key=0;
	while(key!='g')
	{	
		key=getche();
		printf("\n%c\n",key);
	}
	return 0;
}
