#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct student
{
    int Rollno;
    char Name[20];
    int Marks;
};

void FileWrite(char *name)
{
    int fd = 0, ret = 0, size = 0, i = 0;
    struct student sobj;
    
    fd = open(name,O_WRONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }
    printf("Enter number of students");
    scanf("%d",&size);
    
    for(i = 1; i <= size; i++)     
    {
        printf("Enter roll number\n");
        scanf("%d",&sobj.Rollno);
        printf("Enter Name of student\n");
        scanf("%s",&sobj.Name);
        printf("Enter marks\n");
        scanf("%d",&sobj.Marks);
        
        write(fd,&sobj,sizeof(sobj));  
    }
    close(fd);
}

int FileRead(char *name)
{
    int fd = 0, ret = 0, size = 0, i = 0,iSum=0;
    struct student sobj;
   
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    printf("Data from file is : \n");
    
    while((ret = read(fd,&sobj,sizeof(sobj)))!= 0)
    
    for(i=0;i<=ret;i++)
	{
		
		iSum=iSum+sobj.Marks;
	}
//printf("Addition is:%d",iSum);

return iSum;
    close(fd);
}


int main()
{
    char name[20];
    int ret=0;
    printf("Enter file name\n");
    scanf("%s",name);
    
   FileWrite(name);
    
   ret= FileRead(name);
   
   printf("Addition is:%d",ret);
    
    return 0;
}

























