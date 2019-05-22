#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>		//, one can use the more intuitive name bool
#include <assert.h>
int check_vowel (char);
int oneOff (char *s);
int seqTest ();
int
seqTest ()
{
  int seqA[8] = { -111, -109, -91, -89, 89, 91, 109, 111 };
  int i;
  for (i = 0; i < 8; i++)
    {
      printf ("  %3d \n", seqA[i] + 123);
    }
  return 1;
}
