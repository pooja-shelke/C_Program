//Write a program which accept number from user and if number is less than 50
//then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large.


#include<stdio.h>

void ChkNum(int iNo)
{
	if(iNo<50)
	{
		printf("Small\n");
	}

	else if(iNo>50 || iNo<100)
	{
		printf("Number is medium");
	}

	else(iNo>100)
	{
		printf("Number if large");
	}
}
int main()
{
	int iValue=0;

	printf("Enter number");
	scanf("5d",&iValue);

	ChkNum(iValue);

	return 0;
}


