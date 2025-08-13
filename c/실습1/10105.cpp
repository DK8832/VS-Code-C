#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A = 0;

void sum(int A, int B) { // 실습 6 함수
	int res = A + B;
	printf("합은 %d입니다.\n", res);
}

void increase() { // 실습 7 함수
	A++;
	printf("A = %d\n", A);
}

int multiply(int A, int B) { // 실습 8 함수
	return A * B;
}

int quotient(int A, int B) { // 실습 9 함수
	return A / B;
}

int remainder_val(int A, int B) { // 실습 9 함수
	return A % B;
}

int main()
{
	// 실습 1
	/*
	printf("송지율\n");
	*/

	// 실습 2
	/*
	char name[20];
	printf("이름을 입력하세요: ");
	scanf("%s", name);
	printf("입력된 이름: %s\n", name);
	*/

	// 실습 3
	/*
	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &n);
	printf("다음 숫자는 %d입니다.\n", n + 1);
	*/

	// 실습 4
	/*
	int a1, b1;
	printf("첫 번째 숫자: ");
	scanf("%d", &a1);
	printf("두 번째 숫자: ");
	scanf("%d", &b1);
	printf("합은 %d입니다.\n", a1 + b1);
	*/

	// 실습 5
	/*
	float x1, y1;
	printf("첫 번째 실수: ");
	scanf("%f", &x1);
	printf("두 번째 실수: ");
	scanf("%f", &y1);
	printf("평균은 %.2f입니다.\n", (x1 + y1) / 2);
	*/

	// 실습 6
	/*
	int x2, y2;
	printf("첫 번째 숫자: ");
	scanf("%d", &x2);
	printf("두 번째 숫자: ");
	scanf("%d", &y2);
	sum(x2, y2);
	*/

	// 실습 7
	/*
	increase();
	increase();
	*/

	// 실습 8
	/*
	int x3, y3;
	printf("첫 번째 숫자: ");
	scanf("%d", &x3);
	printf("두 번째 숫자: ");
	scanf("%d", &y3);
	printf("곱은 %d입니다.\n", multiply(x3, y3));
	*/

	// 실습 9
	/*
	int x4, y4;
	printf("첫 번째 숫자: ");
	scanf("%d", &x4);
	printf("두 번째 숫자: ");
	scanf("%d", &y4);
	printf("몫 = %d\n", quotient(x4, y4));
	printf("나머지 = %d\n", remainder_val(x4, y4));
	*/

	return 0;
}