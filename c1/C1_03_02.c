#include <stdio.h>
char pic[100010][100010];//画布 
/*第三题暂时还没搞懂怎么画orz，学会了再交*/
int main()
{
	int r,x=0,y,i,j;
	scanf("%d",&r);
	pic[0][0]=pic[0][r*2-1]=pic[r-1][r-1]=1; 
	
	//按照数学关系画这画那 
	for(x=1;x<=r;x++)
	    pic[x][(int)(r-sqrt(r*r-x*x))]=pic[x][(int)(r+sqrt(r*r-x*x))]=1; 
	for(y=1;y<=r;y++)
	    pic[(int)(sqrt(r*r-y*y))][r-y]=pic[(int)(sqrt(r*r-y*y))][r+y-1]=1; 
	 
	for(i=0;i<r*2;i++)
	   {for(j=r-1;j>=0;j--)
	       if(pic[j][i])printf("*");//倒着画左边 
	       else printf(" ");
	    for(j=1;j<r;j++)
	       if(pic[j][i])printf("*");//顺着画右边 
	       else printf(" ");
	    printf("\n");
	   }
	   
	return 0;
 } 
