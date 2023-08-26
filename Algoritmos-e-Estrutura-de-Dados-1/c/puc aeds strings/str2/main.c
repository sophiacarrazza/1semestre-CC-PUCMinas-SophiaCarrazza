#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[50];

    printf("Escreva uma palavra de no maximo 50 caracteres:\n");

    scanf("%[^\n]", s);

    int tams = strlen(s);

    printf("As posicoes das letras A na string %s sao: \n", s);
    for (int i=0; i<tams; i++){
        int c = toupper(s[i]);
        if(c=='A'){

            printf("%d ", i+1);

        }
    }


}
