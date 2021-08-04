#include<stdio.h>
	
int Mult(int iNo)
{
static int iMult=1;
int iDigit=0;
	if(iNo!=0)
	{
		
		iDigit=iNo%10;
		
		iMult=iMult*iDigit;
	     iNo=iNo/10;
		Mult(iNo);
	}
	return iMult;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter Number:");
	scanf("%d",&iNo);
	
	iRet=Mult(iNo);
	
	printf("%d",iRet);
	
	return 0;
}