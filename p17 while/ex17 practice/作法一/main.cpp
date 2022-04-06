#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
//按下Y才會重複執行程式 

int main(int argc, char** argv) {
	char key;
	do
	{
		key=getche();
		printf("\n%c\n",key);
		
	}while(key=='y');
	
	return 0;
}
