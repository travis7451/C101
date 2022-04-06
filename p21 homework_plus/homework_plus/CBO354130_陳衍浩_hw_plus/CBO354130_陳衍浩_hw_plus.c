#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    char *ZH_NUM[] = {"壹","貳","參","肆","伍","陸","柒","捌","玖"};
    char *ZH_FACTOR[] = {"萬","仟","佰","十", "\0"};
    int money, digit, i;
    scanf("%d", &money);
    if(money<1|| money>99999){
    	printf("輸入錯誤");
    	return -1;
	}
	for(i=0;i<5;i++){
		digit = (money/(10000/ pow(10,i)));
		money = money - digit* pow(10,4-i);
		if(digit!= 0){
			printf("%s%s", ZH_NUM[digit-1], ZH_FACTOR[i]);
		}
	}

	printf("元整"); 
	return 0;
}
