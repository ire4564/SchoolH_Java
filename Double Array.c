#include <stdio.h>
#include <string.h>

int main(void) {

	char init[5][10]; //2차원 배열 생성
	char select[10];

	for (int i = 0; i < 5; i++) {
			printf("input students name[%d] :", i);
			scanf_s("%s", init[i], 10);
	
	}
	printf("input complete\nsearch for name : ");
	scanf_s("%s", select, 10);

	for (int i = 0; i < 5; i++) {
		if (strcmp(select, init[i]) == 0) {
			printf("found it!");
			return 0;
		}
		else if (strcmp(select, init[i]) != 0) {
			if (i != 5) continue;
		} 
		else {
				printf("nope");
				return 0;
		}
			
	}
}
	
