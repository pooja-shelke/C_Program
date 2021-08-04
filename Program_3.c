#include<stdio.h>

int CntChar(char str[])
{
	 static int i=0,iCnt=0;
	 
	if(str[i]!='\0')
	{
		if((str[i]>='a')&&(str[i]<='z'))
		{
			iCnt++;
		}
		i++;
		CntChar(str);
	}
	return iCnt;
}

int main()
{
	char str[30];
	int iRet=0;
	printf("Enter String:");
    scanf("%[^'\n']s",&str);
	
	iRet=CntChar(str);
	
	printf("%d",iRet);
	
	return 0;
	
	
}