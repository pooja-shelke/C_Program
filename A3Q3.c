#include<stdio.h>

int ChkFrequency(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	int count=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;

        //printf("%d",iDigit);

		if(iDigit<6 )
		{

			count++;
		}
		iNo=iNo/10;
	}
	return count;
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