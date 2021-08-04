#include<stdio.h>

int Min(int iValue)
{
	static int iMin=9;
	
	int iDigit=0;
	
	if(iValue!=0)
	{
		iDigit=iValue%10;
		
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iValue=iValue/10;
		
	    Min(iValue);
	}
	return iMin;
}

int main()
{
	int iNo=0,iRet=0;;
	
	printf("Enter number:");
	scanf("%d",&iNo);
	
	iRet=Min(iNo);
	
	printf("%d",iRet);
	
	return 0;
}