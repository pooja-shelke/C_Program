#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkOnOff(int iValue)
{
int iMask1=0X00000100;
int iMask2=0X00000800;
int iResult1=0;
int iResult2=0;
iResult1=iValue&iMask1;

iResult2=iValue&iMask2;

if((iResult1==iMask1)||(iResult2==iMask2))
{
	return TRUE;
	
}
else
{
	
	return FALSE;
}

}
int main()
{
int iValue=0;
BOOL bRet=FALSE;
printf("Enter number\n");
scanf("%d",&iValue);

bRet=ChkOnOff(iValue);

if(bRet==TRUE)
{
printf("TRUE");
}

else
{
printf("FALSE");
}
}


/*
0000 0000 0000 0000 0000 0001 0000 0001
0000 0000 0000 0000 0000 1000 0000 0000
-----------------------------------------
*/