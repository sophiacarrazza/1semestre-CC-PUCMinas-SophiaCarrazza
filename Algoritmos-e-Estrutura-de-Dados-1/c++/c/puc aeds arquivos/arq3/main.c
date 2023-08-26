#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l, str[100];
    FILE* arq = fopen("textodigitado.txt","r");

    while((l= fgetc("textodigitado.txt"))!= EOF){
        printf("%c",l);
        str += l;

    }
    int conta=0;
    for (int i=0; i< strlen(str), str++){
        if (strlwr(str[i]) == 'a'){
            conta++;
        }
    }
    printf("A quantidade de letras a na tela e: %d", conta);
    fclose("textodigitado.txt");

    printf("Hello world!\n");
    return 0;
}
