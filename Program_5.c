#include<stdio.h>

int Reverse(int iValue) 
{
	 static int iRev=1;
	
	int iDigit=0;
	
	if(iValue!=0)
	{	
		iDigit=iValue%10;
		iRev=iRev*10+iDigit;
		iValue=iValue/10;
		
	    Reverse(iValue);
	}
return iRev;
}
int main()
{
	int iNo=0,iRet=0;;
	
	printf("Enter number:");
	scanf("%d",&iNo);
	
	iRet=Reverse(iNo);
	
	printf("%d",iRet);
	
	return 0;
}