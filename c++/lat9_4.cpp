#include <stdio.h>
#include <ctype.h>
int main (void)
{
char c='c';
if (isupper (c))
printf ("%c is an uppercase character \n",c);
else printf ("%c is not an uppercase character\n",c);
return 0;
}
