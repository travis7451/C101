#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//�X�J��L����A�����J()��{������ 
int main(int argc, char** argv) {
	char key;
	do
	{
		key=getche();
		printf("\n%c\n",key);
		
	}while(key!='q');
	
	return 0;
}
