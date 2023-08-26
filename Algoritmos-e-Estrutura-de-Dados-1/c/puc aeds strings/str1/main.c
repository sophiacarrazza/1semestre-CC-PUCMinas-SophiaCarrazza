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
    int cont = 0;
    for (int i=0; i<tams; i++){
        int c = toupper(s[i]);
        if(c=='A'){
            cont += 1;

        }
    }

    printf("A quantidade de letras A na string %s e %d", s, cont);

    return 0;
}
