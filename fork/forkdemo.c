
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

//int count=0;
int main(int argc,char const *argv[])
{
    pid_t id;
    printf("Before fork\n");
    id=fork();
    if(0==id)
    {//Child
        //sleep(1);
         printf("In Child:PID=%d\t,PPID=%d\n",getpid() , getppid());
        // printf("count in child %d",count);
    }
    else
    {
        count++;
        printf("In Parent:PID=%d\t,PPID=%d\n",getpid() , getppid());
    // printf("Count in parent %d",count);
    } 
    return 0;

}