#include <stdio.h>
char pic[100010][100010];//���� 
/*��������ʱ��û�㶮��ô��orz��ѧ�����ٽ�*/
int main()
{
	int r,x=0,y,i,j;
	scanf("%d",&r);
	pic[0][0]=pic[0][r*2-1]=pic[r-1][r-1]=1; 
	
	//������ѧ��ϵ���⻭�� 
	for(x=1;x<=r;x++)
	    pic[x][(int)(r-sqrt(r*r-x*x))]=pic[x][(int)(r+sqrt(r*r-x*x))]=1; 
	for(y=1;y<=r;y++)
	    pic[(int)(sqrt(r*r-y*y))][r-y]=pic[(int)(sqrt(r*r-y*y))][r+y-1]=1; 
	 
	for(i=0;i<r*2;i++)
	   {for(j=r-1;j>=0;j--)
	       if(pic[j][i])printf("*");//���Ż���� 
	       else printf(" ");
	    for(j=1;j<r;j++)
	       if(pic[j][i])printf("*");//˳�Ż��ұ� 
	       else printf(" ");
	    printf("\n");
	   }
	   
	return 0;
 } 
