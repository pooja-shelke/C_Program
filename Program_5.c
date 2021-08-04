#include<stdio.h>

void Display(int iNo)
{

static int i=0;
static char ch='a';

	if(i<iNo)
	{
		printf("%c\t",ch);
		ch++;
		i++;
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