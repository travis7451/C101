#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//���UY�~�|���ư���{�� 

int main(int argc, char** argv) {
	char key;
	do
	{
		key=getche();
		printf("\n%c\n",key);
		
	}while(key=='y');
	
	return 0;
}
