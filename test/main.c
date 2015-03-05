#include <assert.h>

#include "module.h"

int main (void)
{
  assert (module_hello_test () == 0);
  
  return 0;
}
