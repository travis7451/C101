#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a1=46 ,a2=5;
	double b1=46, b2=5;
	double x,y;
	x = a1/a2; //x=9
	y = b1/b2; //y=9.2
	
	//�ϥΫ��A�ഫ��a1/a2�Τp�ƹB����
	x = (double)a1/a2; //x=9.2 
	return 0;
}
