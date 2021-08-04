#include<stdio.h>

void Display(int iNo)
{

static int i=0;


	if(iNo>i)
	{
		printf("%d\t",iNo);
		iNo--;
	}
	
	Display(iNo);
	
}
	
int main()
{
	int iNo=0;
	
	printf("Enter Number:");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}