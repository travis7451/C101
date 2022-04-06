#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a, b, ans;
	scanf("%lf%lf",&a,&b);
	ans=a+b;
	printf("%.2f + %.2f = %.2f\n",a,b,ans);
	ans=a-b;
	printf("%.2f - %.2f = %.2f\n",a,b,ans);
	ans=a*b;
	printf("%.2f * %.2f = %.2f\n",a,b,ans);
	ans=a/b;
	printf("%.2f / %.2f = %.2f\n",a,b,ans);
	return 0;
}
