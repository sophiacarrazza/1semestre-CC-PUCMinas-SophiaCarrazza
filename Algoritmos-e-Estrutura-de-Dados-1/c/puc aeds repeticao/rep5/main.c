#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a, p;
   p=1;
   for (a=1;a<=20;a++) {

        p= p*a;

   }
   printf("%e", p);
    return 0;
}
