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

} Carro; //struct chamada carro que representa um veiculo

int qntveiculos;
Carro carros[1000]; //array para os veiculos chamada carros

//funcao para leitura dos veiculos do arquivo
void lerVeiculos()
{
    FILE * arq = fopen("veiculos.txt", "r");

    fscanf(arq, "%d", &qntveiculos);


    for (int i=0; i < qntveiculos; i++)
    {
        fscanf(arq," %8[^;];%50[^;];%5[^;];%20[^;];%6[^;];%200[^\n]", carros[i].placa, carros[i].marca, carros[i].ano, carros[i].preco, carros[i].tipo, carros[i].observacao);
    }

}
//funcao para listagem dos veiculos do arquivo
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
//funcao para encerrar o programa
void sairPrograma()
{
    printf("\nO programa esta sendo encerrado\n");
    exit(0);
}

//funcao para pesquisar um veiculo do arquivo pela placa
void pesquisarVeiculo()
{
    char placa[8];
    printf("\nPesquise um veiculo por sua placa:\n");
    scanf(" %[^\n]",placa);
    strcpy(placa, strupr(placa));

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
//funcao para cadastrar um veiculo novo no arquivo
void cadastrarVeiculo()
{

    lerVeiculos();
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
            //flag para verificar se ja tem o carro
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
//funcao para editar um veiculo do arquivo
void editarVeiculo()
{
    char placa[8];
    printf("\nDigite a placa de um veiculo para ser editado\n");
    scanf(" %[^\n]",placa);
    strcpy(placa, strupr(placa));

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
    else
    {
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
}

//funcao para excluir um veiculo do arquivo
void excluirVeiculo()
{

    char placa[8];
    printf("\nDigite uma placa para a exclusao do veiculo\n");
    scanf(" %[^\n]",placa);
    strcpy(placa, strupr(placa));

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
        printf("\n---Menu Principal---\n");
        printf("Para listar todos os veiculos, digite listar\n");
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
