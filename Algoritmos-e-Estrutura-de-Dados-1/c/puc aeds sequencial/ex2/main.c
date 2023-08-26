#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z, m;
    scanf ("%f %f %f", &x, &y, &z);
    m = (x + y + z)/3.0;

    printf("media aritmetica: %.2f\n", m);

    return 0;
}
