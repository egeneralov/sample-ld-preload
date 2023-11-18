#include <stdio.h>
#include <string.h>
#include <stddef.h>

// void * memcpy ( void * destination, const void * source, size_t num );

int gethostname(char *name, size_t len) {
  char *nhostname="in-vpl-";
  memcpy(name, &nhostname, sizeof(nhostname));
  printf("fuck\n");
  return 0;
}


