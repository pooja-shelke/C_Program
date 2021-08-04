#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkFSBit(int iValue,int iPos1,int iPos2)
{
int iMask1=0X00000001;
int iMask2=0X00000001;
int iResult1=0;
int iResult2=0;
int Cnt=0;
int FinalResult=0;

iMask1=iMask1<<iPos1;
iMask2=iMask2<<iPos2;
int iDigit=0;
iResult1=iValue|iMask1;
iResult2=iValue|iMask2;

FinalResult=iResult1^iResult2;




/*
0000 0000 0000 0000 0000 0000 0000 1010
0000 0000 0000 0000 0000 0000 0000 0100      3
------------------------------------------
0000 0000 0000 0000 0000 0000 0000 1110



0000 0000 0000 0000 0000 0000 0000 1010
0000 0000 0000 0000 0000 0000 0100 0000   |
------------------------------------------    7
0000 0000 0000 0000 0000 0000 0100 1010

0000 0000 0000 0000 0000 0000 0000  1110
0000 0000 0000 0000 0000 0000 0100  1010  ^
-------------------------------------------
0000 0000 0000 0000 0000 0000 0100  0100

*/
}

int main()
{
int iValue=0,iPos1=0,iPos2=0;
BOOL bRet=FALSE;

printf("Enter Number\n");
scanf("%d",&iValue);

printf("Enter First Position\n");
scanf("%d",&iPos1);

printf("Enter First Position\n");
scanf("%d",&iPos1);

bRet=ChkFSBit(iValue,iPos1,iPos2);

if(bRet==TRUE)
{
printf("First and second is on ");
}
else
{
printf("First and second is off ");

}
}