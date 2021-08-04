#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
char Name[50]={'\0'};
int fd=0;

printf("Enter File Name:\n");
scanf(" %s",&Name);

fd=open(Name,O_RDONLY);

if(fd==-1)
{
printf("Unable to Open file\n");
}

else
{
printf("File open Successfully\n");
}
}