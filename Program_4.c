#include<stdio.h>
	
int Fact(int iNo)
{
static int iMult=1;
	if(iNo!=0)
	{
		
		iMult=iNo*iMult;
		
		//printf("%d\t",iMult);
		iNo--;
		
		
	
		Fact(iNo);
	}
	return iMult;
}

int main()
{
	int iNo=0;
	int iRet=0;
	printf("Enter Number:");
	scanf("%d",&iNo);
	
	iRet=Fact(iNo);
	
	printf("%d",iRet);
	
	return 0;
}