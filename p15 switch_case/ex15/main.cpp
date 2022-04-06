#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,ans;
	char key;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf(" %c",&key);
	
	switch(key){
		case '+':
			ans = a+b;
		break;
		case '-':
			ans = a-b;
		break;
		case '*':
			ans = a*b;
		break;
		case '/':
			ans = a/b;
		break;
		default:
			printf("¿é¤J¿ù»~");
			
	}
	printf("%.2f %c %.2f = %.2f",a,key,b,ans);
	return 0;
}
