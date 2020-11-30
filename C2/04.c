#include <stdio.h> 
#include <stdarg.h>

double ave(int n,...);//n代表可变部分总共有几个变量 

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
第二小题：不能
原因:
 不传递至少一个参数，不能确定不定参数的地址，也无法确定不定参数的末尾
(+)
要传递至少一个参数使函数可确定参数个数、地址、如何从栈中取值
 */
