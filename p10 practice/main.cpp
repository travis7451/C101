#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int up,down,h;
	scanf("%d%d%d",&up,&down,&h);
	double ans = (double)((up+down)*h)/2;
	printf("%f\n",ans);
	
	return 0;
}
