#include "module.h"

#include <stdio.h>

void module_hello (void)
{
  printf ("hello!\n");
}

#ifdef TEST

int module_hello_test (void)
{
  return 0;
}

#endif
