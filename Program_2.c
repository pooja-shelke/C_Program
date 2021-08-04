#include<stdio.h>

void Display(int iNo)
{
	
	static int i=1;
	if(i<=iNo)
	{
		printf("%d\t",i);
		i++;
	}
	
	Display(iNo);
	
	/*
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("%d",i);
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