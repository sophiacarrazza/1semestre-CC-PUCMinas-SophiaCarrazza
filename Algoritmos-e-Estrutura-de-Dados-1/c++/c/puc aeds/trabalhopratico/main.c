#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char placa [8];
    char  marca [50];
    char ano[5];
    char preco[20];
    char tipo[6];
    char observacao [200];

} Carro;

int qntveiculos;
Carro carros[1000];

void lerVeiculos()
{
    FILE * arq = fopen("veiculos.txt", "r");

    fscanf(arq, "%d", &qntveiculos);


    for (int i=0; i < qntveiculos; i++)
    {
        fscanf(arq," %8[^;];%50[^;];%5[^;];%20[^;];%6[^;];%200[^\n]", carros[i].placa, carros[i].marca, carros[i].ano, carros[i].preco, carros[i].tipo, carros[i].observacao);
    }

}
void listarVeiculos()
{
    lerVeiculos();
    printf("Quantidade de veiculos: %d",qntveiculos);
    printf("\nVeiculos Cadastrados:\n");
    for (int i=0; i < qntveiculos; i++)
    {
        printf("\nVeiculo %d:\n",i+1);
        printf("Placa: %s\n", carros[i].placa);
        printf("Marca: %s\n", carros[i].marca);
        printf("Ano: %s\n", carros[i].ano);
        printf("Preco: %s\n", carros[i].preco);
        printf("Tipo: %s\n", carros[i].tipo);
        printf("Observacoes: %s\n", carros[i].observacao);
    }


}
void sairPrograma()
{
    printf("\nO programa esta sendo encerrado\n");
    exit(0);
}

void pesquisarVeiculo()
{
    char placa[8];
    printf("\nPesquise um veiculo por sua placa (somente caracteres em caixa alta)\n");
    scanf(" %[^\n]",placa);

    lerVeiculos();
    int flag = 0;
    for (int i=0; i < qntveiculos; i++)
    {
        if(strcmp(carros[i].placa, placa) == 0)
        {
            printf("\nVeiculo %d encontrado:\n",i+1);
            printf("Placa: %s\n", carros[i].placa);
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %s\n", carros[i].ano);
            printf("Preco: %s\n", carros[i].preco);
            printf("Tipo: %s\n", carros[i].tipo);
            printf("Observacoes: %s\n", carros[i].observacao);
        }
        else if(strcmp(carros[i].placa, placa)!= 0)
        {
            flag+=1;
        }

    }
    if (flag==qntveiculos)
    {
        printf("\nVeiculo nao encontrado\n");
    }

}

void cadastrarVeiculo()
{
    //FILE * arq = fopen("veiculos.txt", "r+");
    lerVeiculos();
    //fprintf(arq,"%d",qntveiculos+1);
    Carro vnovo;
    printf("\nDigite as informacoes para cadastrar um veiculo:\n");
    int jatem;
    int qnt;
    do
    {
        printf("Placa:\n");

        fflush (stdin);
        gets( vnovo.placa);
        strcpy(vnovo.placa, strupr(vnovo.placa));
        qnt = strlen (vnovo.placa);
    }
    while (qnt != 7);

    for (int i=0; i<qntveiculos; i++)
    {
        if (strcmp(vnovo.placa, carros[i].placa)==0)
        {
            jatem+=1;
        }
    }
    if(jatem != 0)
    {
        printf("Esta placa ja existe!\n");
    }
    else
    {
        printf("Marca:\n");
        gets( vnovo.marca);
        printf("Ano:\n");
        gets( vnovo.ano);
        printf("Preco:\n");
        gets( vnovo.preco);
        printf("Tipo (carro ou moto):\n");
        gets( vnovo.tipo);
        printf("Observacoes:\n");
        gets( vnovo.observacao);

        FILE * arq = fopen("veiculos.txt", "w");
        fprintf(arq,"%d\n",qntveiculos+1);

        for(int i=0; i<qntveiculos; i++)
        {
            fprintf(arq, "%s;%s;%s;%s;%s;%s\n",carros[i].placa, carros[i].marca, carros[i].ano, carros[i].preco, carros[i].tipo, carros[i].observacao);
        }

        fprintf(arq, "%s;%s;%s;%s;%s;%s\n",vnovo.placa, vnovo.marca, vnovo.ano, vnovo.preco, vnovo.tipo, vnovo.observacao);
        fclose(arq);
        printf("\nVeiculo Cadastrado com sucesso\n");
    }

}

void editarVeiculo()
{
    char placa[8];
    printf("\nDigite a placa de um veiculo para ser editado (somente caracteres em caixa alta)\n");
    scanf(" %[^\n]",placa);

    lerVeiculos();
    int flag = 0;
    int vencontrado;
    for (int i=0; i < qntveiculos; i++)
    {
        if(strcmp(carros[i].placa, placa) == 0)
        {
            vencontrado = i;
            printf("\nVeiculo %d encontrado:\n",i+1);
            printf("Placa: %s\n", carros[i].placa);
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %s\n", carros[i].ano);
            printf("Preco: %s\n", carros[i].preco);
            printf("Tipo: %s\n", carros[i].tipo);
            printf("Observacoes: %s\n", carros[i].observacao);
        }
        else
        {
            flag+=1;
        }

    }
    if (flag==qntveiculos)
    {
        printf("\nVeiculo nao encontrado\n");
    }
    printf("\nDigite as novas informacoes do veiculo encontrado:\n");
    fflush (stdin);
    printf("Marca:\n");
    gets( carros[vencontrado].marca);
    printf("Ano:\n");
    gets( carros[vencontrado].ano);
    printf("Preco:\n");
    gets( carros[vencontrado].preco);
    printf("Tipo:\n");
    gets( carros[vencontrado].tipo);
    printf("Observacoes:\n");
    gets( carros[vencontrado].observacao);

    FILE *arq = fopen("veiculos.txt", "w");
    fprintf(arq,"%d\n", qntveiculos);
    fclose(arq);
    arq = fopen("veiculos.txt", "a");
    for(int i=0; i<qntveiculos; i++)
    {
        fprintf(arq, "%s;%s;%s;%s;%s;%s\n",carros[i].placa, carros[i].marca, carros[i].ano, carros[i].preco, carros[i].tipo, carros[i].observacao);
    }
    fclose(arq);

    printf("\nVeiculo atualizado com sucesso!\n");
}

void excluirVeiculo()
{

    char placa[8];
    printf("\nDigite uma placa para a exclusao do veiculo (somente caracteres em caixa alta)\n");
    scanf(" %[^\n]",placa);

    lerVeiculos();
    int flag = 0;
    int vencontrado;
    for (int i=0; i < qntveiculos; i++)
    {
        if(strcmp(carros[i].placa, placa) == 0)
        {
            vencontrado = i;
            printf("\nVeiculo %d encontrado para exclusao:\n",i+1);
            printf("Placa: %s\n", carros[i].placa);
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %s\n", carros[i].ano);
            printf("Preco: %s\n", carros[i].preco);
            printf("Tipo: %s\n", carros[i].tipo);
            printf("Observacoes: %s\n", carros[i].observacao);
        }
        else
        {
            flag+=1;
        }

    }
    if (flag==qntveiculos)
    {
        printf("\nVeiculo nao encontrado\n");
    }
    else
    {
        int decisao;
        printf("\nVoce realmente deseja excluir este veiculo?\n");
        printf("Digite 1 para sim e 2 para nao\n");
        scanf( "%d", &decisao);
        if(decisao==1)
        {
            for (int i =vencontrado+1; i<qntveiculos; i++)
            {
                carros[vencontrado]=carros[i];
                vencontrado++;
            }

            qntveiculos-=1;
            FILE *arq = fopen("veiculos.txt", "w");
            fprintf(arq,"%d\n", qntveiculos);
            fclose(arq);
            arq = fopen("veiculos.txt", "a");
            for(int i=0; i<qntveiculos; i++)
            {
                fprintf(arq, "%s;%s;%s;%s;%s;%s\n",carros[i].placa, carros[i].marca, carros[i].ano, carros[i].preco, carros[i].tipo, carros[i].observacao);
            }
            fclose(arq);

            printf("\nVeiculo excluido com sucesso\n");

        }
    }
}
int main()
{
    char menuescolha[20];
    do
    {
        printf("\nMenu Principal\n");
        printf("\nPara listar todos os veiculos, digite listar\n");
        printf("Para pesquisar um veiculo, digite pesquisar\n");
        printf("Para cadastrar um veiculo, digite cadastrar\n");
        printf("Para editar um veiculo, digite editar\n");
        printf("ara excluir um veiculo, digite excluir\n");
        printf("Para sair do programa, digite sair\n");
        printf(" \n ");


        fflush(stdin);
        fgets(menuescolha, sizeof(menuescolha), stdin);
        menuescolha[strcspn(menuescolha, "\n")] = '\0';

        for (int i = 0; i < strlen(menuescolha); i++)
        {
            menuescolha[i] = toupper(menuescolha[i]);
        }

        if (strcmp(menuescolha, "LISTAR") == 0)
        {
            printf(" \n");
            listarVeiculos();
        }
        else if (strcmp(menuescolha, "SAIR") == 0)
        {
            sairPrograma();
        }
        else if (strcmp(menuescolha, "PESQUISAR") == 0)
        {
            pesquisarVeiculo();
        }
        else if (strcmp(menuescolha, "CADASTRAR") == 0)
        {
            cadastrarVeiculo();
        }
        else if (strcmp(menuescolha, "EDITAR") == 0)
        {
            editarVeiculo();
        }
        else if (strcmp(menuescolha, "EXCLUIR") == 0)
        {
            excluirVeiculo();
        }


    }
    while (strcmp(menuescolha, "SAIR") != 0);
}
