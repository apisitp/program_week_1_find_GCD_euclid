#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int num1, num2, answer ;
	printf("input first number : ");
	scanf("%d", &num1);
	printf("input second number : ");
	scanf("%d", &num2);
	while (num2 > 0) {
		answer= num1% num2;
		num1 = num2;
		num2 = answer;
	}
	printf("GCD is %d \n", num1);
}