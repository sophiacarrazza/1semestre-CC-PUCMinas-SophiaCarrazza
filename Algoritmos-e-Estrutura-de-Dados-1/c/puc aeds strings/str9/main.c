#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



const int tam1 = 51;
const int tam2 = 4;

int main()
{
    char str1[tam1];
    char str2[tam2];
    printf("Digite uma string de no max 50 caracteres\n");
    scanf("%[^\n]", str1);

    printf("Digite uma outra string de no max 3 caracteres\n");
    scanf(" %[^\n]", str2);

    char *p = str2;
    int cont = 0, pos;
    while((p = strstr(p, str2))!= NULL){
            pos = p - str1;
        p += strlen(str2);
            cont++;
            printf("A posicao da ocorrencia: %d \n", pos);

    }
    printf("Total de ocorrencias: %d \n", cont);
    return 0;
}
