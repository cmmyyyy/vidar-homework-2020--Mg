#include <stdio.h> 
#include <stdarg.h>

double ave(int n,...);//n����ɱ䲿���ܹ��м������� 

int main(){
 
   printf("First term : %.2lf", ave(5, 88, 99, 70, 95, 93));
   printf("Second term : %.2lf", ave(7, 100, 99, 92, 88, 68, 94, 92));
 
   return 0;
 
  }
  
double ave(int n,...) 
{   int i;
    va_list p=NULL;
	va_start(p,n); 
    double num=0;
	for(i=1;i<=n;i++)
	   {num+=va_arg(p,int);
	   }
	va_end(p);
	num=num/(double)n;
	return num;
}

/*
�ڶ�С�⣺����
ԭ��:
 ����������һ������������ȷ�����������ĵ�ַ��Ҳ�޷�ȷ������������ĩβ
(+)
Ҫ��������һ������ʹ������ȷ��������������ַ����δ�ջ��ȡֵ
 */
