#include <stdio.h>
#include <stdarg.h>

int printf(const char *format,...)
{ int retval;
  va_list args;
  va_start(args,format);
  retval=vprintf(format,args);
  va_end(args);
  return retval;
}
