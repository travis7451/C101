#include <stdio.h>
#include <stdlib.h> //�����Y�ɫŧi�F�ƭӦ��Ϊ��禡�A���ѵ{���]�p�̥D���x����X�J�ާ@�����C


int main(int argc, char** argv) {
	double a, b, ans;
	char key;
	
	printf("��J���:");
	scanf("%lf%lf",&a,&b);
	printf("press +,-,*,/:");
	//key = getch();
	scanf("%c",&key);//%c ��Ӧr��
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
			printf("�L�Ħr��\n");
	}
	printf("%.2f%c%.2f=%.2f\n",a,key,b,ans);
	return 0;
}
