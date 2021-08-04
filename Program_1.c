#include<stdio.h>

void Display(int iNo)
{
	
	static int i=0;
	if(i<iNo)
	{
		printf("*\t");
		i++;
	}
	
	Display(iNo);
	
	/*
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("*");
	}
	*/
	}
	



int main()
{
	int iNo=0;
	
	printf("Enter Number:");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}