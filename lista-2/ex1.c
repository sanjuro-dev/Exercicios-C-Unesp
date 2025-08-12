# include <stdio.h>
# include <string.h>

typedef struct{
    char nome[50];
    int integrantes;
    char genero[50];
    unsigned int ranking;

}banda;


void cadastrarBandas(banda bandas[50]){
    int i;
    for(i = 0; i < 50; i++){
        printf("Digite o nome da banda %d: ", i+1);
        scanf("%s", bandas[i].nome);
        printf("Digite o numero de integrantes da banda %d: ", i+1);
        scanf("%d", &bandas[i].integrantes);
        printf("Digite o genero da banda %d: ", i+1);
        scanf("%s", bandas[i].genero);
        printf("Digite o ranking da banda %d: ", i+1);
        scanf("%d", &bandas[i].ranking);
    }
}

void pesquisaRank(banda bandas[50], int rank){
    int i;
    for(i = 0; i < 50; i++){
        if(bandas[i].ranking == rank){
            printf("Nome: %s\n", bandas[i].nome);
            printf("Integrantes: %d\n", bandas[i].integrantes);
            printf("Genero: %s\n", bandas[i].genero);
            printf("Ranking: %d\n", bandas[i].ranking);
        }
        else{
            printf("Nenhuma banda encontrada com o ranking %d\n", rank);
        }

    }
}

void pesquisaGenero(banda bandas[50], char genero[50]){
    int i;
    for(i = 0; i < 50; i++){
        if(strcmp(bandas[i].genero, genero) == 0){
            printf("Nome: %s\n", bandas[i].nome);
            printf("Integrantes: %d\n", bandas[i].integrantes);
            printf("Genero: %s\n", bandas[i].genero);
            printf("Ranking: %d\n", bandas[i].ranking);
        }
    }
}

void pesquisaNome(banda bandas[50], char nome[50]){
    int i;
    for(i = 0; i < 50; i++){
        if(strcmp(bandas[i].nome, nome) == 0){
            printf("Nome: %s\n", bandas[i].nome);
            printf("Integrantes: %d\n", bandas[i].integrantes);
            printf("Genero: %s\n", bandas[i].genero);
            printf("Ranking: %d\n", bandas[i].ranking);
        }
        else{
            printf("Nenhuma banda encontrada com o nome %s\n", nome);
        }
    }
}



