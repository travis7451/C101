#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	
	scanf("%d",&num);//鍵盤輸入之整數存到num , &:從記憶體取出 
	printf("Hello C++ %d\n",num);//將整數num由螢幕輸出
	 
	return 0;
}
//printf(%c 是文字 ， %d是整數 ， \n",'A',123); 
