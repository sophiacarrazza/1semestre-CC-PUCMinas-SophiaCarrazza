#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x1, y1, x2, y2;
    float d;

    printf("digite os valores de p(x1, y1) e 1(x2, y2)\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    d = sqrt(((x2-x1)*(x2 - x1)) + ((y2-y1)*(y2 - y1)));

    printf("a distancia entre essas cordenadas e: %.2f\n", d);
    return 0;
}
