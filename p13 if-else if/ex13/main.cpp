#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int score, n;
	printf("(1)大學部(2)研究所:");
	scanf("%d",&n);
	printf("輸入你的分數:");
	scanf("%d",&score);
	if(score < 60 && n == 1){
		printf("不及格\n");
	}
	else if(score < 70 && n == 2){
		printf("不及格\n");
	}
	else{
		printf("及格\n");
	}
	return 0;
}
