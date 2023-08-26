#include <stdio.h>
#include <stdlib.h>

const int tam = 50;
int main()
{
    char str[tam];
    char strsesp[tam];
    printf("Digite uma string de no max 50 caracteres\n");
    scanf(" %[^\n]", str);

    int tamtext = strlen(str);
    int j = 0;

    for (int i=0; i<tamtext; i++){
        if(!isspace(str[i])){
            strsesp[j] = str[i];
            j++;
        }

    }
    strsesp[j] = '\0';

    printf("Texto digitado: %s", str);
    printf("Texto sem espaco: %s", strsesp);

    return 0;
}
