#include <stdio.h>
#include <stdlib.h>
#define CLASS 2
#define STUDENT 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	double sum=0;
	double avrg;
	int score[CLASS][STUDENT];
	//分別讀入兩班3個數值 
	for(j=0; j<CLASS; j++){
		printf("班級%d: ",j+1);
		for (i=0;i < STUDENT;i++){
			printf("學生%d: ",i+1);
			scanf("%d",&score[j][i]);
		}
	} 
	//計算總和
	for(j=0;j<CLASS;j++){
		for(i=0;i < STUDENT;i++){
			sum+=score[j][i];
		}
	} 
	//求平均值
	avrg=sum/(STUDENT*CLASS);
	printf("average=%lf\n",avrg); 
	return 0;
}
