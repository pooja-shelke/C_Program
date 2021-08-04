#include<stdio.h>

void Display()
{
	
	static int i=1;
static char ch='A';	
	if(i<=6)    
	{
		printf("%c\t",ch);
		i++;
	    ch++;
	}
	
	
	Display();
	/*
	int i=0;
	char ch='A';
	for(i=1;i<=6;i++)    
	{
		printf("%c\t",ch);
		ch++;
	}
	
	*/
	
}

int main()
{
  Display();
  
  return 0;
}