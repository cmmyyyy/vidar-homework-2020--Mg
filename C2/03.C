#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//依题意得： 
struct dxx {
	struct dxx* pp[26];
	char num;
}dx[27];

struct dxx* p[27];

int main()
{
	int i, j, z, n;
	for (i = 0;i < 26;i++)
	{
		p[i] = dx + i;
		dx[i].num = i + 'a';//初始化 
	}
	scanf("%d", &n);
	for (z = 0;z < n;z++)
	{
		char bef[4], aft[4];
		scanf("%s = %s", bef, aft);
		if (aft[0] >= 'a' && aft[0] <= 'z')
			p[bef[0] - 'A'] = dx + aft[0] - 'a';//特判语句1 
		else if (strlen(aft) == 1 && strlen(bef) == 1)
			p[bef[0] - 'A'] = p[aft[0] - 'A'];//2 
		else if (strlen(bef) > 1)
			(*p[bef[0] - 'A']).pp[bef[2] - 'a'] = p[aft[0] - 'A'];//3 
		else if (strlen(aft) > 1)
			p[bef[0] - 'A'] = (*p[aft[0] - 'A']).pp[aft[2] - 'a'];//4
	}
	for (i = 0;i < 26;i++)
		printf("%c -> %c\n", i + 'A', (*p[i]).num);//输出 


}
/*
4
A = b
A = C
A.c = D
E = C.c
*/