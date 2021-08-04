
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void File(char name[],int size)
{
	int fd=0,ret=0;
	char *arr=NULL;
	arr=(char *)malloc(size);
	fd=open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open");
		return;
	}
	
	ret=read(fd,arr,size);
	
		write(1,arr,ret);
	
	
	close(fd);
	free(arr);
}


int main()
{
	char name[30];
	int size=0;
	printf("Enter file name:");
	scanf(" %s",&name);
	
	printf("Enter size:");
	scanf("%d",&size);
	
	File(name,size);
	
	return 0;
}