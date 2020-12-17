#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void test(int** pp) 
{
	for (size_t i = 0; i < 10; i++)
{
	for (size_t j = 0; j < 20; j++)
	{
		printf("%3d, ", pp[i][j]);
	}puts("");
}
}
int main()
{
	int** pp;
	int i,j;
	int*p[10];
	int x[10][20];
	
	for (i = 0;i < 10;i++)
		{
		for (j = 0;j < 20;j++)
			{
			x[i][j] = i*20+j;

			}
		p[i] = &x[i][0];
		}

	pp = &p[0];
	test(pp);
	return 0;

}
