#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arq = fopen("1a10.txt","w+");

    for (int i=0; i<10; i++){
     fprintf(arq,"%d\n", i+1);
    }
    fclose(arq);
    return 0;
}
