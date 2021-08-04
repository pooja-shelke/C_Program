#include<stdio.h>

int Display(int iNo)
{
static int i=0;
int iSum=0;
int iDigit=0;
while(iNo!=0)
{
iDigit=iNo%10;
iSum=iSum+iDigit;
iNo=iNo/10;
Display(iNo);	
}
return iSum;
	
}

int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter Number:");
	scanf("%d",&iNo);
	
	iRet=Display(iNo);
	
	printf("%d",iRet);
	return 0;
}