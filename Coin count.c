#include <stdio.h>

void main(void) {

	int money;
	int f_money; //남은 금액 저장
	
	printf("\n 원하는 금액을 입력해주세요 : ");
	scanf_s("%d", &money);

	printf("500원짜리 동전 %d 개", money/500);
	if (money % 500 != 0) { //만약 500원으로 나눴을때 나머지가 0이 
		//아니라면
		f_money = money % 500;
		printf("100원짜리 동전 %d 개", f_money / 100);//만약 100원으로 나눴을때 나머지가 0이 
		f_money = f_money % 100;
		if (f_money % 100 != 0) {
			printf("50원짜리 동전 %d 개", f_money / 50);//만약 50원으로 나눴을때 나머지가 0이 
			f_money = f_money % 50;
			if (f_money % 50 != 0) {//만약 10원으로 나눴을때 나머지가 0이 
				printf("10원짜리 동전 %d 개", f_money / 10);
				f_money = f_money % 10;
				if (f_money % 10 != 0) {
					printf("1원짜리 동전 %d 개", f_money / 1);//만약 500원으로 나눴을때 나머지가 0이 
					f_money = f_money % 1;
				}
			}
		}

	}
	
}