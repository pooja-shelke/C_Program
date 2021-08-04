#include<stdio.h>

int Count(int iValue)
{
int iResult=0;

int iMask=0X00000001;

iMask=iValue;
int Cnt=0;

while(iValue!=0)
{
	iResult=iValue%10;
	
	Cnt++;
	printf("%d",Cnt);
	iValue=iValue/10;
}

//return Cnt;
}
int main()
{
int iValue=0;
int iRet=0;
printf("Enter NUmber");
scanf("%d",&iValue);

//iRet=
Count(iValue);

//printf("Counter is:%d\n",iRet);

return 0;
}