#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int f(int x)
{
	int num = 0;
	do {
		if (x % 2 == 1)num++;
	} while (x /= 2);
	return num;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", f(a));
	return 0;
}