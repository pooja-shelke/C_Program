#include<stdio.h>

void Display()
{
	static int i=5;   
	if(i>=1)    
	{
		printf("%d\t",i);
		i--;
	}
	
	
	/*
	
	for(i=5;i>=1;i--)    
	{
		printf("%d\t",i);
	}
	
	*/
	Display();
}

int main()
{
  Display();
  
  return 0;
}