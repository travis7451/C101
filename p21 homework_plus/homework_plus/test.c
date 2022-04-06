#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	char ZH_NUM[][] = {'��','�L','��','�v','��','��','�m','��','�h'};
    char ZH_FACTOR[][] = {'�U','�a','��','�Q', '\0'};
    int money, digit, i;
    scanf("%d", &money);
    if(money<1|| money>99999){
    	printf("��J���~");
    	return -1;
	}
	for(i=0;i<5;i++){
		digit = (money/(10000/ pow(10,i)));
		money = money - digit* pow(10,4-i);
		if(digit!= 0){
			printf("%c%c", ZH_NUM[digit-1], ZH_FACTOR[i]);
		}
	}

	printf("����"); 
	return 0;
}
