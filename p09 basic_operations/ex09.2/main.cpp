#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 0;
	int b;
	
	a+=10;
	b = a++;
	b = ++a;
	b = a--;
	b = --a;
	
	return 0;
}
