#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>		//, one can use the more intuitive name bool
int check_vowel (char);
int oneOff (char *s);
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
  char lineOne[] = "16qwerty";
  char lineTwo[] = "4zz";
  char lineThree[] = "64e1tra";
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
  printf ("\nboolcount = %d\n", boolcount);
  printf ("%s\n", dig ? "true" : "false");
}

int
oneOff (char *s)
{
  /*
     int i = 0;
     int boolcount = 0;
     bool dig = false;
     while (s[i])                 // a sort of trick - looking at non-zero characters
     {
     if (isdigit (s[i]) != 0)
     {
     boolcount++;
     dig = true;

     }
     printf ("\n boolcount= %d\n", boolcount);
     }
   */
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


int
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
