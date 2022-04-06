#include <stdio.h>
#include <stdlib.h> //此標頭檔宣告了數個有用的函式，提供程式設計者主控台的輸出入操作介面。


int main(int argc, char** argv) {
	double a, b, ans;
	char key;
	
	printf("輸入兩數:");
	scanf("%lf%lf",&a,&b);
	printf("press +,-,*,/:");
	//key = getch();
	scanf("%c",&key);//%c 單個字元
	printf("%d",key);
	switch(key){
		case '+':
			ans = a+b;
		break;
		case '-':
			ans = a-b;
		break;
		case '*':
			ans = a*b;
		break;
		case '/':
			ans = a/b;
		break;
		default:
			printf("無效字元\n");
	}
	printf("%.2f%c%.2f=%.2f\n",a,key,b,ans);
	return 0;
}
