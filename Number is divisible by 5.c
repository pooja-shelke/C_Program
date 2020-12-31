# C_Program

/*
Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80

*/

#include<stdio.h>
#include<stdlib.h>

void Divisible(int arr[],int iValue)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		if((arr[iCnt]%5)==0)
		{
			printf("%d \t",arr[iCnt]);
		}
	}
}
int main()
{
	int iSize=0;
	int iCnt=0;
	int *ptr=NULL;

	printf("Enter Number of size");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*4);               //ptr=(int*)malloc(iSize*sizeof(int)); 

	printf("Enter elements in the array");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	Divisible(ptr,iSize);
}
