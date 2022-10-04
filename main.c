#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  2
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid;
     int    i;
     char   buf[BUF_SIZE];

     fork();//parent1 created child1

     fork();//parent1 created child2 and child1 created child3

     pid = getpid();
     for (i = 1; i <= MAX_COUNT; i++) {
          sprintf(buf, "This line is from pid %d, value = %d\n, parentid = %d\n", pid, i, getppid());
          sleep(5);
          write(1, buf, strlen(buf));
     } 
}