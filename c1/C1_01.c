#include <stdio.h>
char s[10000000];
int main()
{
	int n,cnt=0,i;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)	/*�жϴ�д����*/ 
	   if(s[i]<97)cnt++;
	
	if(cnt<=n/2)
	   for(i=0;i<n;i++)
	      if(s[i]<97)printf("%c",tolower(s[i]));
	      else printf("%c",s[i]);
	
	else for(i=0;i<n;i++)
	      if(s[i]<97)printf("%c",s[i]);
	      else printf("%c",toupper(s[i]));
	/*ת��*/ 
	
	printf("\n");
	return 0;
	
 } 
