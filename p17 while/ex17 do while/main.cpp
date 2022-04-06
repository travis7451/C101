#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//出入鍵盤按鍵，直到輸入()後程式結束 
int main(int argc, char** argv) {
	char key;
	do
	{
		key=getche();
		printf("\n%c\n",key);
		
	}while(key!='q');
	
	return 0;
}
