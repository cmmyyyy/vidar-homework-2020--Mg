
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char s[3][3];int a[2][3];int x1, x2;
//a��0����i������i��
//a��1����i������i��
//x1��\�Խ���   x2��/�Խ��� 
//    1����x     2����x��������_ 
int main()
{
	int n, i, j, o = 0, x = 0, cnt, flag = 0;
	scanf("%s", s[0]);
	scanf("%s", s[1]);
	scanf("%s", s[2]);//���� 

	for (i = 0;i < 3;i++)
		for (j = 0;j < 3;j++)
		{
			if (s[i][j] == 'O')o++;
			else if (s[i][j] == 'X')x++;
		}

	if (o != x)
	{
		printf("wrong\n");
		return 0;
	}//�ж��Ƿ�Ϸ� 


	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			if (s[i][j] == 'X')
			{
				a[0][i] = 1;//��ǵ�i�� 
				a[1][j] = 1;//��ǵ�j�� 
				if (s[i][0] == 'X' && s[i][1] == 'X' && s[i][2] == 'X') {
					printf("can't win\n");
					return 0;
				}
				if (s[0][j] == 'X' && s[1][j] == 'X' && s[2][j] == 'X') {
					printf("can't win\n");
					return 0;
				}
			}
		}
	}//�����x���л��� 
    
		if (s[0][0] == 'X' && s[1][1] == 'X' && s[2][2] == 'X')
	{
		printf("can't win");
		return 0;
	}
	else if (s[0][0] != 'X' && s[1][1] != 'X' && s[2][2] != 'X')
	{
		for (i = 0, cnt = 0;i < 3;i++)
			if (s[i][i] == '_')cnt++;
		if (cnt == 1)
		{
			printf("can win\n");return 0;
		}
		if (cnt == 2)x1 = 2;//��Ǵ˶Խ��� 
	}

	if (s[0][2] == 'X' && s[1][1] == 'X' && s[2][0] == 'X') 
	{
	printf("can't win");
	return 0;
    }
	else if(s[0][2] != 'X' && s[1][1] != 'X' && s[2][0] != 'X')
	{
		for (i = 0, cnt = 0;i < 3;i++)
			if (s[i][2 - i] == '_')cnt++;
		if (cnt == 1)
		{
			printf("can win\n");return 0;
		}
		if (cnt == 2)x2 = 2;//��Ǵ˶Խ��� 

	}

	if (x1 == x2 && x1 == 2 && s[1][1] == '_') 
	{
		printf("can win\n");return 0;
	}


	for (n = 0;n < 3;n++)
	{
		if (a[0][n] != 1)//������X 
		{
			for (i = 0, cnt = 0;i < 3;i++)
				if (s[n][i] == '_')cnt++;
			if (cnt == 1)
			{
				printf("can win\n");return 0;
			}
			if (cnt == 2)a[0][n] = 2;//��Ǵ��� ��Ϊ�������1����ǣ� 
		}
		else if (s[n][0] == s[n][1] && s[n][1] == s[n][2] && s[n][2] == 'X') {
			printf("can't win");
			return 0;
		}
	} // 


	for (n = 0;n < 3;n++)
	{
		if (a[1][n] != 1)//������X 
		{
			for (i = 0, cnt = 0;i < 3;i++)
				if (s[i][n] == '_')cnt++;
			if (cnt == 1)
			{
				printf("can win\n");return 0;
			}
			if (cnt == 2)
			{
				for (i = 0;i < 3;i++)
				{
					if (s[i][n] == 'O')continue;
					else if (a[0][i] == 2)
					{
						printf("can win\n");return 0;//�ײ���1 
					}
				}
			}
		}
		else if (s[0][n] == s[1][n] && s[1][n] == s[2][n] && s[2][n] == 'X') {
			printf("can't win");
			return 0;
		}
	}


	printf("can't win\n");
	return 0;
}

/*
�������
1��
O_X
__X
__O
2��
O__
X_X
O__
3��
O_X
__X
OOX
*/
