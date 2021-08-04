#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void Display(char fname[])
{
	int fd=0;
	char arr[100];
	int ret=0;
	fd=open(fname,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open");
		return;
	}
	
	ret=read(fd,arr,sizeof(arr));
    printf("file size is%d bytes of file",sizeof(arr));

	close(fd);
	
	
	
	
}
int main()
{
	char fname[30];
	
	printf("Enter file name:");
	scanf("%s",fname);
	
	
	Display(fname);
	
	return 0;
}