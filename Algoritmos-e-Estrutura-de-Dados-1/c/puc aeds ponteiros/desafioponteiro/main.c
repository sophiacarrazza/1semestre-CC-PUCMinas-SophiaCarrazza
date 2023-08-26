#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int col = 3;
    const int lin = 2;
    int mat [lin] [col];
    int *ptr = mat;

    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Digite o valor da linha %d e da coluna %d:\n", i, j);
            scanf("%d", (ptr++));
            // o scanf precisa do endereco para imprimir, nao o conteudo! por isso nao precisa colocar * no ptr++ (o & serve pra mostrar o endereco)
        }
    }
    ptr=mat;

    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {

            printf("%d ", *(ptr++));

        }
        printf("\n");
    }

}
