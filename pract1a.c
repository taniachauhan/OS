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
else if(a==0) //In Child Process
{
execl("/bin/ls","ls\n",NULL);
}
else //Parent Process
{
printf("\nIn Parent Process\n");
}
return 0;
}