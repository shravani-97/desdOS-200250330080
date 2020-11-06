#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int count =0;

int add(int a,int b)
{
    
    return a+b;
}
void *thread(void *arg)
{
    add(20,30);
    int data=10;
    count++;
    printf("Thread\n");
}


int main(int argc,char const *argv[])
{
    
    pthread_t tid;
    add(50,80);
    count++;
    printf("Before thread creation\n");
    pthread_create(&tid,NULL,thread,NULL);
    //printf("After thread creation\n");
    //sleep(1);
    //printf("After sleep creation\n");
    printf("Data %d\n",data);
    return 0;
}