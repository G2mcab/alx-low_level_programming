#include "main.h"
/**                                                                                                                                               
 * main - prints _putchar followed by new line                                                                                                    
 * Return - 0                                                                                                                                     
 */

int main(void)
{
  char ptcr[]="_putchar";

  int c=0;
  while(c<8)
    {
      putchar(ptcr[c]);
    }
  putchar('\n');
  return (0);
}

