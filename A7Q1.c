#include<stdio.h>

int ChkFrequency(int iNo)
{
	int iDigit=0;
	int iEvnSum=0;
	int iEvnSum1=0;
	int iOddSum=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	  
    while(iNo!=0)
	  {
		
		iOddSum=0;
		iDigit=iNo%10;

		if((iDigit%2)==0)
	    {
		iEvnSum1=iEvnSum1+iDigit;


	    }



		if((iDigit%2)!=0)
	    {
		iEvnSum=iEvnSum+iDigit;


	    }

		

	    iNo=iNo/10;
	}
return iEvnSum1- iEvnSum;


}


int main()
{
	int iValue=0;
	int iFreq=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	//printf("Enter iFrequency\n");
	//scanf("%d",&iFreq);
   
    iFreq= ChkFrequency(iValue);

    printf("Number is%d",iFreq);

   return 0;
}