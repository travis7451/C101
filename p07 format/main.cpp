#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=42;
	double y=12.345;
	char c='A';
	
	printf("%d %lf %c\n",x,y,c);
	printf("|%15d|\n",x);//��15�� 
	printf("|%-15d|\n",x);//�V����� 
	printf("|%015d|\n",x);//�e���ťճB��0 
	printf("|%10lf|\n",y);//long�� . ���O�]�S���Y 
	printf("|%10.3lf|\n",y);//���p���I�H�U�ĤT�� 
	return 0;
}
