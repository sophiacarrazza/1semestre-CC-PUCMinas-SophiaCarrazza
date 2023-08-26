#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, x, maior, menor;

    for (a=1; a<=10; a++)
    {
        scanf("%d", &x);

        if(a==1)
        {
            menor=x;
            maior=x;
        }

        if(x < menor)
        {
            menor = x;

        }
        else if(x > maior)
        {
            maior = x;


        }

    }
    printf("menor: %d\n", menor);
    printf("maior: %d\n", maior);
    return 0;
}
