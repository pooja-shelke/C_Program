#include<stdio.h>

int Max(int iValue)
{
	static int iMax=0;
	
	int iDigit=0;
	
	if(iValue!=0)
	{
		iDigit=iValue%10;
		
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iValue=iValue/10;
		
	    Max(iValue);
	}
	return iMax;
}

int main()
{
	int iNo=0,iRet=0;;
	
	printf("Enter number:");
	scanf("%d",&iNo);
	
	iRet=Max(iNo);
	
	printf("%d",iRet);
	
	return 0;
}