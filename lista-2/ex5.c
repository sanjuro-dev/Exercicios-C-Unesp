# include <stdio.h>


typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[50];
    char estado[50];
    int cep;
}endereco;

typedef struct{
    char nome[50];
    int idade;
    int rg;
    int sexo;
    int ra;
    float rendimento;
    data nascimento;
    endereco endereco;
}aluno;

aluno cadastro[50];

void cadastrarAluno(aluno cadastro[50]){
    int i;
    for(i = 0; i < 50; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", cadastro[i].nome);
        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%d", &cadastro[i].idade);
        printf("Digite o rg do aluno %d: ", i+1);
        scanf("%d", &cadastro[i].rg);
        printf("Digite o sexo do aluno %d: ", i+1);
        scanf("%d", &cadastro[i].sexo);
        printf("Digite o ra do aluno %d: ", i+1);
        scanf("%d", &cadastro[i].ra);
        printf("Digite o rendimento do aluno %d: ", i+1);
        scanf("%f", &cadastro[i].rendimento);
        printf("Digite a data de nascimento do aluno %d: ", i+1);
        scanf("%d %d %d", &cadastro[i].nascimento.dia, &cadastro[i].nascimento.mes, &cadastro[i].nascimento.ano);
        printf("Digite a rua do aluno %d: ", i+1);
        scanf("%s", cadastro[i].endereco.rua);
        printf("Digite o numero do aluno %d: ", i+1);
        scanf("%d", &cadastro[i].endereco.numero);
        printf("Digite o bairro do aluno %d: ", i+1);
        scanf("%s", cadastro[i].endereco.bairro);
        printf("Digite a cidade do aluno %d: ", i+1);
        scanf("%s", cadastro[i].endereco.cidade);
        printf("Digite o estado do aluno %d: ", i+1);
        scanf("%s", cadastro[i].endereco.estado);
        printf("Digite o cep do aluno %d: ", i+1);
        scanf("%d", &cadastro[i].endereco.cep);
    }
}

int compararchar(char a, char b){
    if( a < b){
        return -1;
    }
    else if(a > b){
        return 1;
    }
    else{
        return 0;
    }
}


int compararstr(char stra[], char strb[]){
    int i;
    for(i = 0; stra[i] != '\0' && strb[i] != '\0'; i++){
        if(stra[i] != strb[i]){
            return compararchar(stra[i], strb[i]);
        }
    }
}

void ordem_alfabetica(aluno cadastro[50]){
    int i, j;
    aluno aux;
    for(i = 0; i < 50; i++){
        for(j = 0; j < 50; j++){
            if(compararstr(cadastro[i].nome, cadastro[j].nome) < 0){
                aux = cadastro[i];
                cadastro[i] = cadastro[j];
                cadastro[j] = aux;
            }
        }
    }
}


void ordem_cr(aluno cadastro[50]){
    int i, j;
    aluno aux;
    for(i = 0; i < 50; i++){
        for(j = 0; j < 50; j++){
            if(cadastro[i].rendimento > cadastro[j].rendimento){
                aux = cadastro[i];
                cadastro[i] = cadastro[j];
                cadastro[j] = aux;
            }
        }
    }
}

void pesquisa_ra(aluno cadastro[50], int ra){
    int i;
    for(i = 0; i < 50; i++){
        if(cadastro[i].ra == ra){
            printf("Nome: %s\n", cadastro[i].nome);
            printf("Idade: %d\n", cadastro[i].idade);
            printf("Rg: %d\n", cadastro[i].rg);
            printf("Sexo: %d\n", cadastro[i].sexo);
            printf("Rendimento: %f\n", cadastro[i].rendimento);
            printf("Nascimento: %d %d %d\n", cadastro[i].nascimento.dia, cadastro[i].nascimento.mes, cadastro[i].nascimento.ano);
            printf("Endereco: %s %d %s %s %s %d\n", cadastro[i].endereco.rua, cadastro[i].endereco.numero, cadastro[i].endereco.bairro, cadastro[i].endereco.cidade, cadastro[i].endereco.estado, cadastro[i].endereco.cep);
            printf("Ra: %d\n", cadastro[i].ra);
        }
    }
}

void imprime(aluno cadastro[50]){
    int i;
    for(i = 0; i < 50; i++){
        printf("Nome: %s\n", cadastro[i].nome);
        printf("Idade: %d\n", cadastro[i].idade);
        printf("Rg: %d\n", cadastro[i].rg);
        printf("Sexo: %d\n", cadastro[i].sexo);
        printf("Rendimento: %f\n", cadastro[i].rendimento);
        printf("Nascimento: %d %d %d\n", cadastro[i].nascimento.dia, cadastro[i].nascimento.mes, cadastro[i].nascimento.ano);
        printf("Endereco: %s %d %s %s %s %d\n", cadastro[i].endereco.rua, cadastro[i].endereco.numero, cadastro[i].endereco.bairro, cadastro[i].endereco.cidade, cadastro[i].endereco.estado, cadastro[i].endereco.cep);
        printf("Ra: %d\n", cadastro[i].ra);
    }
}

