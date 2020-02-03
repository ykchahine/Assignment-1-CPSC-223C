
/* Exercise 1-13 */

/*to print histogram based on word inputted by user */

#include<stdio.h>

int main(void)
{
  int c;

  while((c=getchar())!=EOF)
  {

    if( c == ' ' || c == '\n' || c == '\t')
      putchar('\n');
    else
      putchar('*');
  }
return 0;
}

/* Histogram of Frequency of Different Characters in Input */

#include<stdio.h>
#define TNOCHAR 128  /* Total Number of characters is 128: 0 - 127 */
