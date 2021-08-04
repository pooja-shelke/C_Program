#include<stdio.h>


//#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CountDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of digits
//  Autor : Piyush Manohar Khairnar
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int FactEvnNum(int iNo)                //      0
{
    int iCnt = 0;                           //  4
    int iDigit=0;
    int count=0;
    while(iNo != 0)
 
    {
        iDigit = iNo % 10;
        count++;
        iNo=iNo/10;
    }
    
    return iCnt;
}

int main()
{
	int iValue=0;
int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet=FactEvnNum(iValue);
printf("Number f digitd is:%d",iRet);
	return 0;
}