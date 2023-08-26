#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, r, dias = 0;
    scanf("%d %d", &f, &r);
    int pos[r];
    for (int i=0; i<r; i++){
        scanf("%d", &pos[i]);
    }

    int postomadas = r;
    do{
    for (int i=0; i<r; i++){
        if (pos[i] > 0 || pos[i]<f-1){
            postomadas += 2;
        } else if (pos[i] == 0 || pos[i] == f-1){
            postomadas += 1;
        }
        dias += 1;
    }
    } while (postomadas != f);

    printf("%d", dias+4);
    return 0;
}
