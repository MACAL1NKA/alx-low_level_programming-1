#include "main.h"
#include <stdio.h>


/**
 * Find the end of the dest string
 * Append src to the end of dest
 */

char *strcat(char *dest, const char *src)

{
  char *dest_end = dest;


  while (*dest_end != '\0')
  {
    dest_end++;
  }
  while (*src != '\0')
  {
    *dest_end = *src;
    dest_end++;
    src++;
  }

  *dest_end = '\0';
  return (dest);

}
