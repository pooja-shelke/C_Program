#include<stdio.h>

void DisplayFactor(int iNo)
{

int i=0;

if(iNo <= 0)
{
     iNo= - iNo;

}
for(i = 1; i<=iNo ; i++)
{
if( (i%2)==0)
{
    printf("%d\t",i);
}
}
}
int main()
{
int val=0;

printf("enter number");

scanf("%d",&val);

DisplayFactor(val);

return 0;
}

																																			)