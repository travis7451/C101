#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=42;
	double y=12.345;
	char c='A';
	
	printf("%d %lf %c\n",x,y,c);
	printf("|%15d|\n",x);//空15格 
	printf("|%-15d|\n",x);//向左對齊 
	printf("|%015d|\n",x);//前面空白處填0 
	printf("|%10lf|\n",y);//long用 . 不是也沒關係 
	printf("|%10.3lf|\n",y);//限小數點以下第三位 
	return 0;
}
