#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <string.h>

#include <stdbool.h>		//, one can use the more intuitive name bool

#include <assert.h>

#include "seqTest.h"
 // to build the sequence 

int table[16];

int
buildSeq ()
{
  int i;
  for (i = 0; i < 16; i++)
    {
      //  initialise the table 
      table[i] = 3;
    }
  for (i = 0; i < 16; i++)
    {
      if ((i % 1) == 0)
	table[i] = table[i] + 1;
      if ((i % 2) == 0)
	//      table[i] = table[i] + 10;
	if ((i % 4) == 0)
	  table[i] = table[i] + 100;
      if ((i % 8) == 0)
	table[i] = table[i] + 1000;
    }
  for (i = 0; i < 16; i++)
    {
      printf ("%3d  table[%d] \n", i, table[i]);
    }
  return 1;
}
