# C_Program/*Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6

Elements : 85 66 3 80 93 88

Output : 53 (234 - 181)


*/
#include<stdio.h>
#include<stdlib.h>

int EvnOddSum(int arr[],int iValue)
{
	int i=0;
	int iEvnSum=0;
	int iOddSum=0;

	for(i=0;i<iValue;i++)
	{
		if(arr[i]%2==0)
		{
			iEvnSum=iEvnSum+arr[i];
		}
		else
		{
			iOddSum=iOddSum+arr[i];
		}
	}

	return iEvnSum-iOddSum;

}


int main()
{
	int iValue=0;
	int i=0;
	int *ptr=NULL;
	int iResult=0;

	printf("Enter Size of the array");
	scanf("%d",&iValue);

	ptr=(int*)malloc(iValue*sizeof(int));

	printf("Enter Elements in the array");

	for(i=0;i<iValue;i++)
	{
		scanf("%d",&ptr[i]);

	}

	iResult=EvnOddSum(ptr,iValue);

	printf("summation of the even and odd number is:%d",iResult);

	return 0;
}
