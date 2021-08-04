#include<stdio.h>


int  SumFact(int iNo)
{
	int iCnt=0;
    int iSum=0;
    int iSum1=0;	
    for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			//printf("%d\t",iCnt);
		   iSum1=iSum1+iCnt;
		}
		 
		if((iNo%iCnt)!=0)
		{
			//printf("%d\t",iCnt);
		   iSum=iSum+iCnt;
		}
	
	}
	return iSum1-iSum;
	
}


int main()
{
	int iValue=0;
   int iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);

	iRet=SumFact(iValue);

	printf("Summation of factos is:%d",iRet);

	return 0;
}