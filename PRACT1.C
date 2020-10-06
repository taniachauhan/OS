#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int a;
a=fork();
if(a<0)
{
printf("Child Process could not be Created");
exit(-1);
}
else //Child Process Created Successfully
{
printf("My ID is:%d,My Parent ID is:%d\n",getpid(),getppid());
}
return 0;
}