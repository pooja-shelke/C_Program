#include<stdio.h>

int EvnNum(int iNo)
{
	int iCnt=0;
    int iAns=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{

	
		iAns=iNo%2;
	  if(iAns==0)
	  {
       printf("%d",iCnt);

	  }
	}
    return 0;
}

int main()
{
	int iValue=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	EvnNum(iValue);

	return 0;
}