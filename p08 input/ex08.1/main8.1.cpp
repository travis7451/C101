#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1;
	double num2;
	char ch;
	
	scanf("%c", &ch);
	scanf("%d",&num1);
	scanf("%lf",&num2);
	
	printf("%c\n",ch);
	printf("%d\n",num1);
	printf("%lf\n",num2);
	
	return 0;
}
