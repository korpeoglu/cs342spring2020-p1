#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

void * my_start_fn (void *  a)
{
  printf ("thread started\n"); 
  fflush (stdout); 

  pthread_exit(NULL); 
}


int main()
{

  pthread_t tid; 

  printf ("starting thread\n"); 
  pthread_create(&tid, NULL, (void *) my_start_fn, NULL); 
  
  exit(0);
}
