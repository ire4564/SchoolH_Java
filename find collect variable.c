#include <stdio.h>

void main(void) {

	char name1, name2, name3, name4, name5;

	printf("\n ���� ���� �Է����ּ��� : ");

	name1 = getchar();
	name2 = getchar();
	name3 = getchar();
	name4 = getchar();
	name5 = getchar();

	/*
	if (name1 == ' ' | name2 == ' ' | name3 == ' ' | name4 == ' ' | name5 == ' '){ //����ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (name1 == '&' | name2 == '&' | name3 == '&' | name4 == '&' | name5 == '&') { //Ư������ ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (name1 == '-' | name2 == '-' | name3 == '-' | name4 == '-' | name5 == '-') { //Ư������ ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (name1 == '$' | name2 == '$' | name3 == '$' | name4 == '$' | name5 == '$') { //Ư������ ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (isdigit(name1)) { //�ռ��ڰ� �����϶�
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else {
	printf("������ �����Ǿ����ϴ�."); //�ùٸ��� �����Ǿ��� ���
	}*/

	//isdigit()�� �̿��� ó��
	
	if (name1 == ' ' | name2 == ' ' | name3 == ' ' | name4 == ' ' | name5 == ' '){ //����ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (name1 == '&' | name2 == '&' | name3 == '&' | name4 == '&' | name5 == '&') { //Ư������ ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (name1 == '-' | name2 == '-' | name3 == '-' | name4 == '-' | name5 == '-') { //Ư������ ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else if (name1 == '$' | name2 == '$' | name3 == '$' | name4 == '$' | name5 == '$') { //Ư������ ó��
		printf("�ùٸ� �������� �ƴմϴ�.");
	}

	else if (name1 ==  '0' | name1 == '1' | name1 == '2' | name1 == '3' | name1 == '4' | name1 == '5' | name1 == '6' | name1 == '7' | name1 == '8' | name1 == '9' ) {
		printf("�ùٸ� �������� �ƴմϴ�.");
	}
	else {
		printf("������ �����Ǿ����ϴ�."); //�ùٸ��� �����Ǿ��� ���
	}
	//printf("%c%c%c%c%c", name1, name2, name3, name4, name5);

}