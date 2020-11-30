#include "bignumber.h"
#include <stdio.h>

int main()
{
	bignumber num1;
	bignumber num2;

	num1 = scanbignumber();
	num2 = scanbignumber();
	printbignumber(sumbignumber(num1, num2));
	printbignumber(mulbignumber(num1, num2));//俩小题都在这里啦 
	return 0;
}
