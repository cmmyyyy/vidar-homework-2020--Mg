#include <stdio.h>
int num[100010][2];
int main()
{	
	int i,j=0,n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    /*0Ϊǰ��1Ϊ��num[0][]Ŀ���ǵ�һ��������ģ������*/
	for(i=1;i<n;i++)
       {num[i][1]=i+1;
        num[i][0]=i-1;
	   }
    num[0][0]=0;num[0][1]=1;
    num[n][0]=n-1;num[n][1]=1;
    
	/*ѭ��������*/
	while(n>=m)
	 {for(i=0;i<m;i++)
	     j=num[j][1];
	  if(j==k){printf("YES");return 0;} 
	  num[num[j][0]][1]=num[j][1];
	  num[num[j][1]][0]=num[j][0];
	  n--;
		}   
		
	printf("NO");
	return 0;//������orzzz 
          
}
