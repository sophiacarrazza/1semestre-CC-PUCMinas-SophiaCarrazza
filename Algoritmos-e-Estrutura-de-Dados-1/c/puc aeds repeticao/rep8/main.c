#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, s;
   s=0;
   for (a=1;a<=30;a++) {
        if (a%5 == 0) {
        s = s+a;
        }
   }
   printf("%d", s);
    return 0;
}
