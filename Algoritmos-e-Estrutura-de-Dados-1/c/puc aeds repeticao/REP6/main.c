#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, a, s;
   s=0;
   for (a=1;a<=100;a++) {
        scanf("%d", &n);
        s = s+n;

   }
   printf("%d", s);
    return 0;
}
