#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, n; //declaramos a variavel do numero que sera fatorado e a variavel que contem o resultado da fatoracao

    printf("Insira o numero que sera fatorado:\n");
    scanf("%d", &n); // lemos o valor de n


    for (f=1; n>1; n--) // fizemos um for para realizar multiplicacoes dos numeros decrescentes desde o numero desejado ate 1 para formar a fatoracao
    {
        f *= n; // guardamos o resultado de cada multiplicacao na variavel f ate o contador - n - se igualar ao numero desejado.
    }

    printf("O fatorial desse numero e: %d\n", f); // printamos o resultado
    return 0;
}
