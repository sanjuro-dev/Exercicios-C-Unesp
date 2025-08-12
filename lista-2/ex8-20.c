# include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}dataNascimento;


typedef struct{
    char nome[50];
    char rg[50];
    float salario;
    int idade;
    char sexo;

}tipoREG;

typedef struct{
    tipoREG funcionario[100];
    int Quant;
}tipoCadastro;