#include <stdio.h>

int main()
{
	int h1,m1,h2,m2,min1,min2;
	
	scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
	
	if(h1>=24)h1-=24;if(h2>=24)h2-=24;
	if(h1>=12)h1-=12;if(h2>=12)h2-=12;//24h转换为12h 
    min1=h1*60+m1;min2=h2*60+m2;
   
   //时针 按照数学关系这样那样…… 
	if(min1>min2)
         if((720-min1+min2)%2==0)printf("%d ",(720-min1+min2)/2);
         else printf("%.1f %d",(float)(720-min1+min2)/2);
    else if((min2-min1)%2==0)printf("%d ",(min2-min1)/2);
         else printf("%.1f ",(float)(min2-min1)/2);
    
	//分针 按照数学关系这样那样……     
    if(m1>m2)printf("%d",(60-m1+m2)*6);
    else printf("%d",(m2-m1)*6);
    
	   
	printf("\n");
	return 0;
	
 } 
