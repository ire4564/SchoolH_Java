#include <stdio.h>
float Max;
float Min;
float Mid;


int GetMin(float num1, float num2, float num3) {
	if (num1 < num2) { //1�� 2�� 2�� �� ũ��
		Min = num1;
		if (num1< num3) { //���ߴ� 2�� ���ο� 3�� ���ؼ� 
			Min = num1; //3�� �� ũ��
		}
	}
	else if (num2 < num3) { //1�� �� ������ Ŭ�� �ٷ� 3�� ���ؼ� 
		 //3�� Ŭ���
		Min = num2;
	}
	else if (num3 < num1) {
		Min = num3;
	}
	printf("���� ���� ������ ���� %f�Դϴ�.\n", Min);
}

//�ּҰ�

int GetMax(float num1, float num2, float num3) {
	if (num1 < num2) { //1�� 2�� 2�� �� ũ��
		Max = num2;
		if (num2 < num3) { //���ߴ� 2�� ���ο� 3�� ���ؼ� 
			Max = num3; //3�� �� ũ��
		}
	} else if (num1 < num3) { //1�� �� ������ Ŭ�� �ٷ� 3�� ���ؼ� 
			//3�� Ŭ���
			Max = num3;
	} else if (num3 <num1) { 
			Max = num1;
	}
		printf("���� ū ù��° ���� %f�Դϴ�.\n", Max);
}

//�ִ밪

int GetMid(float num1, float num2, float num3) {
	if (num1 != Max && num1 !=Min) { //num1�� �ִ밪�� �ƴϰ� �ּҰ��� �ƴҶ�
		Mid = num1;
		printf("�߰��� ���� %f�Դϴ�.\n", Mid);
		
	} else if (num2 != Max && num2 != Min) {//num2�� �ִ밪�� �ƴϰ� �ּҰ��� �ƴҶ�
		Mid = num2;
		printf("�߰��� ���� %f�Դϴ�.\n", Mid);

	}
	else {//num3�� �ִ밪�� �ƴϰ� �ּҰ��� �ƴҶ�
		Mid = num3;
		printf("�߰��� ���� %f�Դϴ�.\n", Mid);
	}
	
}//�߰���


int main(void) {
	float num1;
	float num2;
	float num3;

	printf("�Ǽ� �� ���� �Է����ּ��� : \n");
	scanf_s("%f", &num1);
	scanf_s("%f", &num2);
	scanf_s("%f", &num3);

	GetMax(num1, num2, num3);
	GetMin(num1, num2, num3);
	GetMid(num1, num2, num3);

	//printf("%f%f%f�� ������ ���� %f%f%f�Դϴ�.\n", f1, f2, f3, GetMin(f1,f2,f3), GetMid(f1, f2, f3), GetMax(f1,f2,f3);

}