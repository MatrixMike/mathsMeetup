#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>		//, one can use the more intuitive name bool
#include <assert.h>
int check_vowel (char);
int oneOff (char *s);
int seqTest ();
/*
 * aim is to extract each digit from a numeric string and add one to each value 
 * this 
 */

int
main ()
{
//  char s[100], t[100];                // 
  int i = 0;
  bool dig = false;
  int boolcount = 0;
  char stest[] = "16vv";	// line one

  char lineOne[] = "16qwerty";	// was 16
  char lineTwo[] = "4zz";	// was 4 
  char lineThree[] = "64emtra";	// inserting a digit in the sea of non digits m1t test
  printf ("%d\n", atoi (stest));
  printf ("Enter a string to test for numeric values\n");
//  gets(s);  // better use fgets
  char str[] = "16sAdx";
  printf ("%s\n", dig ? "true" : "false");
  printf (">>  %d\n", atoi (str));	// seems to stop conversion at non-numeric char
  printf (">>> %d\n", atoi (lineTwo) * atoi (str));	// seems to stop conversion at non-numeric char
  while (str[i])		// a sort of trick - looking at non-zero characters
    {
      putchar (toupper (str[i]));
      if (isdigit (str[i]) != 0)
	{
	  boolcount++;
	  dig = true;
	}
      i++;
    }

  oneOff (lineOne);
  oneOff (lineTwo);
  oneOff (lineThree);
  printf (">>> %d * %d = %d \n", atoi (lineOne), atoi (lineTwo), atoi (lineTwo) * atoi (str));	// seems to stop conversion at non-numeric char

  assert (16 == atoi (stest));
  assert ((atoi (lineOne) * atoi (lineTwo) == atoi (lineThree))
	  && "process did not work");
/* when core dumps occur look in /var/log/apport.log   on ubuntu 
  Distributor ID:	Ubuntu
Description:	Ubuntu 16.04.6 LTS
Release:	16.04
Codename:	xenial
*/

//  printf ("\nboolcount = %d\n", boolcount);
//  printf ("%s\n", dig ? "true" : "false");
  seqTest ();
}

int
oneOff (char *s)
{

  int i = 0;
  int boolcount = 0;
  bool dig = false;
  printf ("\n input value is %s\n", s);
  while (s[i])			// a sort of trick - looking at non-zero characters
    {
      if (isdigit (s[i]) != 0)
	{
	  boolcount++;
	  dig = true;
	}
      i++;
      //     printf ("\n boolcount= %d\n", boolcount);
    }
  printf ("%s\n", dig ? "true" : "false");
  printf ("\n boolcount= %d\n", boolcount);
  switch (boolcount)
    {
    case 3:
      //process numbers with three digits
//      printf ("=3manip %d \n", atoi (s) + 11);  
      // -111,109,-91,89,89,91,109,111

    case 2:
      //process numbers with two digits
      printf ("=2manip %d \n", atoi (s) + 11);
      printf ("=2manip %d \n", atoi (s) - 11);
      printf ("=2manip %d \n", atoi (s) + 9);
      printf ("=2manip %d \n", atoi (s) - 9);
      return boolcount;
    case 1:
      //process numbers with one digit
      printf ("=1manip %d \n", atoi (s) + 1);
      printf ("=1manip %d \n", atoi (s) - 1);
      printf ("\n***\n");
    default:

      return boolcount;
      // return boolcount  could be used by caller

    }
  printf ("\n got here\n");
  //process numbers with one digit
  printf ("=1manip %d \n", atoi (s) + 1);
  printf ("=1manip %d \n", atoi (s) - 1);
  printf ("\n***\n");
  //process numbers with two digits
  printf ("=2manip %d \n", atoi (s) + 11);
  printf ("=2manip %d \n", atoi (s) - 11);
  printf ("=2manip %d \n", atoi (s) + 9);
  printf ("=2manip %d \n", atoi (s) - 9);
/*  //process numbers with three digits
  printf ("=3manip %d \n", atoi (s) + 11);
  printf ("=3manip %d \n", atoi (s) - 11);
  printf ("=3manip %d \n", atoi (s) + 9);
  printf ("=3manip %d \n", atoi (s) - 9);  
*/

  return 3;
}


/* 
 * int
check_vowel (char c)
{
  switch (c)
    {
//    case 'a':
    case 'A':
//    case 'e':
    case 'E':
//    case 'i':
    case 'I':
//   case 'o':
    case 'O':
//    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
    }
}
*/


int
seqTest ()
{
  int seqA[8] = { -111, -109, -91, -89, 89, 91, 109, 111 };
  int i;
  for (i = 0; i < 8; i++)
    {
      printf ("\n    %d \n", seqA[i] + 123);
    }
  return 1;
}
