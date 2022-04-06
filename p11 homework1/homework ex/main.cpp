#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double x,y,ans;
	scanf("%lf%lf",&x,&y);
	ans = x+y;
	printf("%.2f + %.2f = %.2f\n", x, y, ans) ;
	return 0;
}
