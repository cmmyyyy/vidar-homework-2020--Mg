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
	int** pp[10][20];
	int i,j,a;
	int* p[10][20];
	int x[10][20];
	
	for (i = 0;i < 10;i++)
		{
		for (j = 0;j < 20;j++)
			{
			x[i][j] = i*10+j;
			p[i][j] = &x[i][j];
			pp[i][j] = &p[i][j];
			}
		}
	test(pp[0][0]);
	return 0;

}