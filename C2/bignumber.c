
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "bignumber.h"

bignumber scanbignumber(void)
{
	bignumber num;
	scanf("%s", num.s);
	return num;
}//输入数字 

intbignumber sumbignumber(bignumber num1, bignumber num2)
{
	int i, j, n;
	intbignumber num3;
	memset(num3.s, 0, sizeof(int) * 300);

	for (i = strlen(num1.s) - 1, j = strlen(num2.s) - 1, n = 0;i >= 0 && j >= 0;i--, j--, n++)
	{
		num3.s[n] = num1.s[i] - '0' + num2.s[j] - '0';
	}//位数相同相加 ，位数小的在数组3前排起 
	if (i >= 0)
		for (;i >= 0;i--, n++)
			num3.s[n] = num1.s[i] - '0';

	else if (j >= 0)
		for (;j >= 0;j--, n++)
			num3.s[n] = num2.s[j] - '0';//突出来的照搬进数组3 

	for (i = 0;i < n;i++)
	{
		num3.s[i + 1] += num3.s[i] / 10;
		num3.s[i] = num3.s[i] % 10;//处理结果数组，多的进位 
	}



	return num3;
}

intbignumber mulbignumber(bignumber num1, bignumber num2)
{
	int i, j, n, m;
	intbignumber num3;
	memset(num3.s, 0, sizeof(int) * 300);
	for (i = strlen(num1.s) - 1, n = 0;i >= 0;i--, n++)
	{
		for (j = strlen(num2.s) - 1, m = 0;j >= 0;j--, m++)
		{
			num3.s[m + n] += (num1.s[i] - '0') * (num2.s[j] - '0');
		}
	}//模拟手写乘法 


	for (i = 0;i < 250;i++)
	{
		num3.s[i + 1] += num3.s[i] / 10;
		num3.s[i] = num3.s[i] % 10;//处理结果数组，多的进位 
	}
	return num3;
}

int printbignumber(intbignumber num)
{
	int i = 250;
	for (;i >= 0;i--)
		if (num.s[i] != 0)break;
	for (;i >= 0;i--)
		printf("%d", num.s[i]);
	printf("\n");
	return 0;//从后面开始倒序输出 
}
