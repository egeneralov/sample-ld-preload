#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand (time(NULL));
  for(int i=0; i<5; i++){
    printf ("%d\n", rand()%100);
  }


  char resolved_hostname[255];
  // errno_t 
  // ret;
  ino_t ret;
  ret = gethostname(resolved_hostname, sizeof(resolved_hostname));
  if (ret != 0) {
    printf("fuck");
  } else {
    printf("%s\n", resolved_hostname);
  }
}
