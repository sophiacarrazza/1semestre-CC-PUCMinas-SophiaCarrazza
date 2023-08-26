#include <stdio.h>
#include <stdlib.h>

int sinal(int n)
{
    if(n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return 0;
    }
}


int main()
{
    int q;
    printf("Digite a quantidade de numeros que serao digitados\n");
    scanf("%d", &q);

    for (int i=0; i<q; i++)
    {
        int n;
        printf("Digite o %do numero\n", i+1);
        scanf("%d", &n);
        if(sinal(n))
        {
            printf("Esse numero e positivo\n");
        }
        else
        {
            printf("Esse numero e negativo\n");
        }


    }
    return 0;
}
