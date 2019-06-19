#include <stdio.h>

int check_data(int year, int month, int day) {

	

		//윤년의 조건
		//4로 나누어 떨어진다, 그중 100으로 나누어 떨어지면 아니다, 400으로 떨어지면 무조건 윤년이다
	if (year % 4 != 0 || (year % 100 == 0 && year%400!=0)) {//윤년이 아님
		if (month == 2 && (day >= 29)) {
			return 0;
		}
	} else if (month > 12 && month<1) { //1,3,5,7,8,10,12월은 31일 2,4,6,9,11월은 30일까지
				return 0;
	} else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day > 31) {
				return 0;
		}
	}
	else if (year == 0 && month == 0 && day == 0) {
		return 0;
	}
	else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) {
			return 0;
		}
	} else {
		return 1;
	}


}
	


int main(void) {
	int year, month, day;
	int re;

	do {
		printf("년도, 월, 일을 차례대로 입력 해주세요. :");
		scanf_s("%d", &year);
		scanf_s("%d", &month);
		scanf_s("%d", &day);

		re = check_data(year, month, day);

		if (re == 0) {
			printf("유효한 날짜가 아닙니다. 다시 입력해주세요. \n");
		} else{
			printf("입력하신 날짜는 유효한 날짜입니다.");
			break;
		}
	} while (1);
	
	
}