typedef struct {
	char s[110];
}bignumber;//�����ַ��� 

typedef struct {
	int s[300];
}intbignumber;//���⽨����������

bignumber scanbignumber(void);

intbignumber sumbignumber(bignumber num1, bignumber num2);

intbignumber mulbignumber(bignumber num1, bignumber num2);

int printbignumber(intbignumber num);

