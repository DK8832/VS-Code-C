#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A = 0;

void sum(int A, int B) { // �ǽ� 6 �Լ�
	int res = A + B;
	printf("���� %d�Դϴ�.\n", res);
}

void increase() { // �ǽ� 7 �Լ�
	A++;
	printf("A = %d\n", A);
}

int multiply(int A, int B) { // �ǽ� 8 �Լ�
	return A * B;
}

int quotient(int A, int B) { // �ǽ� 9 �Լ�
	return A / B;
}

int remainder_val(int A, int B) { // �ǽ� 9 �Լ�
	return A % B;
}

int main()
{
	// �ǽ� 1
	/*
	printf("������\n");
	*/

	// �ǽ� 2
	/*
	char name[20];
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", name);
	printf("�Էµ� �̸�: %s\n", name);
	*/

	// �ǽ� 3
	/*
	int n;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("���� ���ڴ� %d�Դϴ�.\n", n + 1);
	*/

	// �ǽ� 4
	/*
	int a1, b1;
	printf("ù ��° ����: ");
	scanf("%d", &a1);
	printf("�� ��° ����: ");
	scanf("%d", &b1);
	printf("���� %d�Դϴ�.\n", a1 + b1);
	*/

	// �ǽ� 5
	/*
	float x1, y1;
	printf("ù ��° �Ǽ�: ");
	scanf("%f", &x1);
	printf("�� ��° �Ǽ�: ");
	scanf("%f", &y1);
	printf("����� %.2f�Դϴ�.\n", (x1 + y1) / 2);
	*/

	// �ǽ� 6
	/*
	int x2, y2;
	printf("ù ��° ����: ");
	scanf("%d", &x2);
	printf("�� ��° ����: ");
	scanf("%d", &y2);
	sum(x2, y2);
	*/

	// �ǽ� 7
	/*
	increase();
	increase();
	*/

	// �ǽ� 8
	/*
	int x3, y3;
	printf("ù ��° ����: ");
	scanf("%d", &x3);
	printf("�� ��° ����: ");
	scanf("%d", &y3);
	printf("���� %d�Դϴ�.\n", multiply(x3, y3));
	*/

	// �ǽ� 9
	/*
	int x4, y4;
	printf("ù ��° ����: ");
	scanf("%d", &x4);
	printf("�� ��° ����: ");
	scanf("%d", &y4);
	printf("�� = %d\n", quotient(x4, y4));
	printf("������ = %d\n", remainder_val(x4, y4));
	*/

	return 0;
}