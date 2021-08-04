#include<stdio.h>

int StrLen(char str[])
{
static int i=0,iCnt=0;

if(str[i]!='\0')
{
	iCnt++;
	i++;
	StrLen(str);
}

	

return iCnt;
	
}

int main()
{
	char ch[30];
	int iRet=0;
	printf("Enter string:");
	scanf("%[^'\n']s",&ch);
	
	iRet=StrLen(ch);
	
	printf("%d",iRet);
	return 0;
}