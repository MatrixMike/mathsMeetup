#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>		//, one can use the more intuitive name bool
int check_vowel (char);

int
main ()
{
//  char s[100], t[100];                // 
  int i = 0;
  bool dig = false;
  int boolcount = 0;
  char stest[] = "1vvv";	// line one
  char lineTwo[] = "4zz";
  printf ("%d\n", atoi (stest));
  printf ("Enter a string to test for numeric values\n");
//  gets(s);  // better use fgets
  char str[] = "16sAdx";
  printf ("%s\n", dig ? "true" : "false");
  while (str[i])		// a sort of trick - looking at non-zero characters
    {
      putchar (toupper (str[i]));
      if (isdigit (str[i]) != 0)
	{
	  boolcount++;
	  dig = true;
	  printf (">> %d\n", atoi (str));	// seems to stop conversion at non-numeric char
	  printf (">>> %d\n", atoi (lineTwo) * atoi (str));	// seems to stop conversion at non-numeric char
	  printf ("manip %d \n", atoi (lineTwo) + 1);
	  printf ("manip %d \n", atoi (lineTwo) - 1);
	}
      i++;
    }

/*  for (i = 0; str[i] != '\0'; i++)
    {
      if (check_vowel (toupper (str[i])) == 0)
	{			//not a vowel
	  t[j] = str[i];
	  j++;
	}
    }
*/
  printf ("\nboolcount = %d\n", boolcount);
  printf ("%s\n", dig ? "true" : "false");
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
