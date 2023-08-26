#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[50];
    printf("Digite uma palavra de no max 50 caracteres:\n");
    scanf("%[^\n]", s);

    int tams = strlen(s);
    int letras = 0;
    int nums = 0;
    int outros = 0;

    for (int i=0; i<tams; i++) {
        if(isalpha(s[i])) {
            letras++;
        } else if(isdigit(s[i])){
            nums++;
        } else{
            outros++;
        }
    }
    printf("%d sao letras\n", letras);
    printf("%d sao numeros\n", nums);
    printf("%d sao outros caracteres\n", outros);
    return 0;
}
