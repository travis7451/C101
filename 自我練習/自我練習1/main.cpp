#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Given xyz, print 
    // x
    // y
    // z
    // �y�k�����n�A���g�޿�
int main(int argc, char** argv) {
	int a,b,c,d;
	scanf("%d",&a);
	b=a/100;
	c=(a-b*100)/10;
	d=(a-b*100-c*10);
	printf("%d\n%d\n%d",b,c,d);
	 
	return 0;
}
