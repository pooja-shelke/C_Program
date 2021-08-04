#include<stdio.h>

int WhiteSpace(char Str[])
{/*
	int i=0;int iCnt=0;    
	while(Str[i]!='\0')
	{
		if(Str[i]==' ')
		{
			iCnt++;
		}
		i++;
	}
	return iCnt;
	*/
	static int i=0,iCnt=0;
	
	if(Str[i]!='\0')
	{
		if(Str[i]==' ')
		{
			iCnt++;
		}
		i++;
		
		WhiteSpace(Str);
	}	
return iCnt;
}
int main()
{
	char str[30];
	int iRet=0;
    printf("Enter String:");
	scanf("%[^'\n']s",&str);
	
	iRet=WhiteSpace(str);
	
	printf("%d",iRet);
	
	return 0;
}