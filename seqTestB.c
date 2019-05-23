#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>		//, one can use the more intuitive name bool
#include <assert.h>
#include "seqTest.h"
// to build the sequence 
void tableprint ();
int seqTestB ();
int table[16];
int
main ()
{
  int p;
  p = seqTestB ();
  printf ("return value is %d\n", p);
}

int
seqTestB ()
{
//  int x = 3;
/*  for (int i = 0; i < 16; i++)	// was 16 
    {
      //  initialise the table 
//      table[i] = 0;
      printf ("%3d", i);
      printf (" test A %3d", ((i % 2) == 1) ? 1 : -1);
      printf (" test B %3d", ((i / 4) == 1) ? 10 : -10);
      //     printf (" test D %3d", ((i % 4) == 0) ? 10 : -10);
      printf (" test C %4d\n", ((i / 8) == 1) ? 100 : -100);
    }
  tableprint ();
*/
  for (int i = 0; i < 16; i++)
    {
//              printf("\n");
      table[i] = table[i] + (((i % 2) == 1) ? 1 : -1);
//      printf ("table[i]= %4d\n", table[i]);
      table[i] = table[i] + (((i / 4) == 1) ? 10 : -10);
//      printf ("table[i]= %4d\n", table[i]);
      table[i] = table[i] + (((i / 8) == 1) ? 100 : -100);
//      printf ("table[i]= %4d\n", table[i]);
      //     table[i] = table[i] + ((i % 8) == 1) ? 1000 : -1000;

    }
  tableprint ();
/*  for (int i = 0; i < 16; i++)
    {
      printf ("%3d  table[%d] \n", i, table[i]);
    }
*/
/*  printf ("\n\n");
  int i = 3;
  (table[i] % 2 == 0) ? printf ("%d\n", i) : printf ("%d\n", i * i);
  */
  return 1;
}

void
tableprint ()
{
  for (int i = 0; i < 16; i++)
    {
      printf ("%3d  table[%d] \n", i, table[i]);
    }
}
