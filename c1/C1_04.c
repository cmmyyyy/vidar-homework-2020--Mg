#include <stdio.h>
#include <string.h> 
int s2[3];
int main()
{
	char s1[3][100000];
	int i,j,_=0,maxx=1;

/*找最大数字*/
	scanf("%s + %s = %s",s1,s1+1,s1+2);
	for(i=0;i<3;i++)
	   for(j=0;j<strlen(s1[i]);j++)
	       if(s1[i][j]<'A'&&s1[i][j]-'0'>maxx)maxx=s1[i][j]-'0';
	       else if(s1[i][j]>='A'&&s1[i][j]-'A'>maxx)maxx=s1[i][j]-'A'+10;
//	printf("%d\n",maxx); debug用
  
  /*转换为十进制比较，_为判断*/ 
    for(++maxx;maxx<=16;maxx++)
       {for(i=0;i<3;i++)
	      for(j=0;j<strlen(s1[i]);j++)
	         if(s1[i][j]<'A')s2[i]=s2[i]*maxx+s1[i][j]-'0';
	         else if(s1[i][j]>='A')s2[i]=s2[i]*maxx+s1[i][j]-'A'+10;	       
	    if(s2[0]+s2[1]==s2[2]){
	    	printf("%d\n",maxx);_=1;break;}
	     memset(s2,0,sizeof(s2));
	   }
	 //  printf("%d %d %d\n",s2[0],s2[1],s2[2]);
	   if(_==0)printf("-1\n");
	  
}
