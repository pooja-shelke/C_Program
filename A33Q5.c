#include<stdio.h>
typedef int UINT;
UINT Modified(UINT iNo)
{
	UINT iResult=0;
	
	if(iNo<=0)
	{
		return 0;
		
	}
	
	UINT iMask=0X0000000F;
	
	iResult=iNo|iMask;
	
	return iResult;
}	
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	iRet=Modified(iValue);
	
	printf("Modifeied number is:%d\n",iRet);
	
	return 0;
	
	
}