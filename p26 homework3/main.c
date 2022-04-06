#include <stdio.h>
#define N 3

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
	
	printf("avg = %.2f\n", avg); 
	
	printf("fail:\n");
	for(i=0;i<N;i++){
		if(score[i]<60){
			printf("%d: %d\n",i+1,score[i]);
		}
	}
	 printf("highest:\n");
	 int MaxScore = score[0];
	 int MaxPos = 0;
	 for(i=0;i<N;i++){
	 	if(score[i]>MaxScore){
	 		MaxScore=score[i];
	 		MaxPos = i+1;
		 }
	 }
	printf("%d: %d",MaxPos,MaxScore);
	return 0;
}
