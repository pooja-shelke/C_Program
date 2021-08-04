#include<stdio.h>

void display(int no)
{


int i=0;

if(no<=0)
{
no=-no;
}
for(i=1;i<=no;i++)
{
if(((i%2)==0)&&((no%2)==0))
{
printf("%d\t",i);
}
}
}
int main()
{
int val=0;

printf("Enter number\n");

scanf("%d",&val);

display(val);

return 0;
}

