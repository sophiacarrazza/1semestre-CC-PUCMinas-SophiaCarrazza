#include <stdio.h>
#include <stdlib.h>

char categoria(int id){
    if(id >=5 && id <= 7){
        return 'F';
    } else if(id >=8 && id <= 10){
        return 'E';
    } else if(id >=11 && id <= 13){
        return 'D';
    } else if(id >=14 && id <= 15){
        return 'C';
    } else if(id >=16 && id <= 17){
        return 'B';
    } else if(id >18){
        return 'A';
    }


}

int main()
{
    int id;
    printf("Digite sua idade\n");
    scanf("%d", &id);


    printf("A sua categoria como nadador e: %c", categoria(id));

    return 0;
}
