#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
//Recv
int main(int argc,char const *argv[])
{
 unsigned char rbuff[64];
int fd;
mkfifo("desd",S_IRUSR | S_IWUSR);
fd=open("desd",O_RDONLY);
read(fd,rbuff,64);
printf("Recv'd from sender: %s\n",rbuff);
close(fd);
return 0;
}
