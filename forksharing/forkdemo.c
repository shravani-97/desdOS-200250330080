
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int count=0;
int main(int argc,char const *argv[])
{
    pid_t id;
    printf("Before fork\n");
    id=fork();
    if(0==id)
    {//Child
    sleep(1);
          printf("Count in Child %d\n",count);
         //printf("In Child:PID=%d\t,PPID=%d\n",getpid() , getppid());
    }
    else
    {
        count++;
        printf("Count in Parent %d\n",count);
        //printf("In Parent:PID=%d\t,PPID=%d\n",getpid() , getppid());
    }
    return 0;

}