#include <stdio.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	double sum = 0;
	double avg;
	int score[N];
	
	for (i=0;i<N;i++){
		scanf("%d", &score[i]);
	}
	for(i=0;i<N;i++){
		sum += score[i];
	}
	
	avg =sum/N;
	
	printf("sum = %.2f\n", sum);
	printf("avg = %.2f\n", avg);
	for(i=0;i<N;i++){
		if(score[i]<60){
			printf("%d: %d\n",i+1,score[i]);
		}
	}
	
	return 0;
}
