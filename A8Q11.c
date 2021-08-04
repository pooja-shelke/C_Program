//Write a program which accept number from user and if number is less than 50
//then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large.


#include<stdio.h>

void ChkNum(int iNo)
{
	/*
		if(iNo<50)
	{
		printf("Small\n");
		break;
	}
	while(iNo==0)
	{
	if (iNo>=50 || iNo<=100)
	{
		printf("medium\n");
		break;
	}


	else if(iNo>100)
	{
		printf("Number if large");
		break;
	}
	else
	{
		printf("Number is small" );
		break;
	}
}
*/








void ChkNum(int iNo)
{
	switch(iNo)
	{

	case 1:
	if(iNo<50)
		{
			printf("Samll");
		}
		break;

    case 2:
  /* else(iNo>=50 || iNo<=100)
	{
		printf("medium\n");
	
	}
		break;*/
	case 3:
	default :
	{
		printf("Number is small" );
	
	}
		//break;


}

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


