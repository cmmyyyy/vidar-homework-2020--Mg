typedef struct {
	char s[110];
}bignumber;//输入字符串 

typedef struct {
	int s[300];
}intbignumber;//纯粹建来传递数组

bignumber scanbignumber(void);

intbignumber sumbignumber(bignumber num1, bignumber num2);

intbignumber mulbignumber(bignumber num1, bignumber num2);

int printbignumber(intbignumber num);

