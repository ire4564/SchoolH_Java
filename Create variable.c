char name1, name2, name3, name4, name5;

printf("\n ���� ���� �Է����ּ��� : ");

name1 = getchar();
name2 = getchar();
name3 = getchar();
name4 = getchar();
name5 = getchar();

if (name1 == " " && name2 == " " && name3 == " " && name4 == " " && name5 == " ") { //���� ó��
	printf("�ùٸ� �������� �ƴմϴ�.");
}
if (isdigit(name1)) { //�ռ��ڰ� �����϶�
	printf("�ùٸ� �������� �ƴմϴ�.");
}
else {
	printf("������ �����Ǿ����ϴ�."); //�ùٸ��� �����Ǿ��� ���
}

//printf("%c%c%c%c%c", name1, name2, name3, name4, name5);

}