#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[50];
    char n;

    printf("Escreva uma palavra de no maximo 50 caracteres:\n");
    scanf("%[^\n]", s);

    printf("Digite um caracter para verificar sua presenca na palavra:\n");
    scanf(" %c", &n);

    int cont = 0;
    int tams = strlen(s);

    printf("\nAs posicoes do caracter %c na string %s sao: \n",n,s);
    for (int i=0; i<tams; i++){
        char c = toupper(s[i]);

        if(c== toupper(n)){
            cont++;
            printf("%d ", i+1);
        }
    }

    printf("\nA quantidade de aparicoes do caracter %c na string %s e: \n",n,s);
    printf("%d ", cont);


}
