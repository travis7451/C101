#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	char key;
	key=getche();
	while(key=='y')
	{
		key=getche();
		printf("\n%c\n",key);
	}
	
	return 0;
}
