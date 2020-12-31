# C_Program

#include<stdio.h>
#include<stdlib.h>

int SumOfNum(int arr[],int iValue)
{
	int iSum=0,i=0;

	for(i=0;i<iValue;i++)
	{
		iSum=iSum+arr[i];
	}
	return iSum;
}              //

int main()
{
	int iValue=0;
	int iCnt=0;
	int iResult=0;

	int *ptr=NULL;

	printf("Enter Value of N: ");
	scanf("%d",&iValue);

	ptr=(int*)malloc(iValue*sizeof(int));

	printf("Enter Number of elements in array\t");

	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Your Entered elements are:\t");

	for(iCnt=0;iCnt<iValue;iCnt++)
	{

		printf("%d\t",ptr[iCnt]);
	}

    iResult=SumOfNum(ptr,iValue);

    printf("Addition of a n numbers is :%d",iResult);

    return 0;

}
