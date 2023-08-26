#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z, s, p;
    scanf ("%f %f %f", &x, &y, &z);
    s = (x + y + z);
    p = (x * y * z);
    printf("soma: %.2f\n", s);
    printf("soma: %.2f\n", p);

    return 0;
}
