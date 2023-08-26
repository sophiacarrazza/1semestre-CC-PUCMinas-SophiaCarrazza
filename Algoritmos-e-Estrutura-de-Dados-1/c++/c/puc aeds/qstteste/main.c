#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[7];
    int contv=0;

    for (int i=0; i<6; i++){
        scanf(" %c", &x[i]);
        if(x[i]=='V'){
                contv++;

        }
    }

    if(contv==1 || contv==2){
        printf("3");
    } else if (contv==3 || contv==4){
        printf("2");
    } else if (contv==5 || contv==6){
        printf("1");
    } else if (contv==0){
        printf("-1");
    }

    return 0;
}
