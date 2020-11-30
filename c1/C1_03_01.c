#include <stdio.h>
char pic[10010][10010];//用数组创造世界名画 
int main()
{
	int n,i,j,cnt=0;
	scanf("%d",&n);
	n=n/2+1;
	
	while(cnt!=n)
	{for(i=cnt;i<n;i++)
	    pic[cnt][i]=1; 
	 cnt++;
	}//上色 

	for(i=0;i<n;i++)
	   {for(j=n;j>=0;j--)
	       if(pic[j][i])printf("*");
	       else printf(" ");//世界名画是对称的，倒着画出左边 
	    for(j=1;j<n;j++)
	       if(pic[j][i])printf("*");
	       else printf(" ");//顺着画出右边 
	    printf("\n");
	   }
	   
	return 0;
 } 
