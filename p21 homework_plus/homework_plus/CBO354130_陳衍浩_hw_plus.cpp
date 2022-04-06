#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(void){
	string ZH_NUM = "壹貳參肆伍陸柒捌玖";
    string ZH_FACTOR = "萬仟佰十\0";
    int money,five,four,three,two,one,digit,i;
    scanf("%d", &money);
    if(money<1|| money>99999){
    	printf("輸入錯誤");
    	return -1;
	}
	for(i=0;i<5;i++){
		digit = (money/(10000/ pow(10,i)));
		money = money - digit* pow(10,4-i);
		if(digit!= 0){
			cout << ZH_NUM[digit-1] << ZH_FACTOR[i];
			//printf("%c%c", ZH_NUM[digit-1], ZH_FACTOR[i]);
		}
	}

	printf("元整"); 
	return 0;
}
