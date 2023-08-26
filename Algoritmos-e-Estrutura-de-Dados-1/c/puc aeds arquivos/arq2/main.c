#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE* arq = fopen("textodigitado.txt","w+");

    char x[100];
    printf("Digite um texto para ser adicionado ao arquivo\n");
   for (int i = 0; i < 100; i++){
     scanf("%[^\n]", &x[i]);
   }

    for (int i=0; i<strlen(x); i++){
     fprintf(arq,"%c", x[i]);
    }
    if(!("textodigitado.txt" == NULL)){
        printf("O texto foi adicionado ao arquivo com sucesso\n");

    } else {
        printf("ERRO: O texto não foi adicionado ao arquivo\n");

    }
    fclose(arq);
    return 0;
}
