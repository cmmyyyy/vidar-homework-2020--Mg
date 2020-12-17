#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct x {
	int a[13];
	char b[16];
};

int hexdump(char* p, int n)
{
	
	int i;
	while (n>0)
	{
		printf("%p ", p);
		for (i = 0;i < 16;i++)
		{
			if (i < n)printf("%02x ", *(p+i));

		}
		printf("|");
		for (i = 0;i < 16;i++)
		{   
			if (i < n) {
				if (p[i] > 127||p[i]<32)printf(".");
				else 	printf("%c", *(p+i));
			}

		}
		printf("|\n");
		p += 16;
		n -= 16;
	}
	return 0;
}

int main()
{
	struct x a;
	memset(a.b, '.', sizeof(a.b));
	memset(a.a, 2, sizeof(a.a));
	int n=0;
	a.b[0] ='a' ;
	a.a[0] = 3;
	char * p=&a;
	hexdump(p,sizeof(struct x));
	return 0;

}
