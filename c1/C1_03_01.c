#include <stdio.h>
char pic[10010][10010];//�����鴴���������� 
int main()
{
	int n,i,j,cnt=0;
	scanf("%d",&n);
	n=n/2+1;
	
	while(cnt!=n)
	{for(i=cnt;i<n;i++)
	    pic[cnt][i]=1; 
	 cnt++;
	}//��ɫ 

	for(i=0;i<n;i++)
	   {for(j=n;j>=0;j--)
	       if(pic[j][i])printf("*");
	       else printf(" ");//���������ǶԳƵģ����Ż������ 
	    for(j=1;j<n;j++)
	       if(pic[j][i])printf("*");
	       else printf(" ");//˳�Ż����ұ� 
	    printf("\n");
	   }
	   
	return 0;
 } 
