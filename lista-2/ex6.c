# include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}dma;


int deltaT(dma data1, dma data2){
    int delta;
    delta = (data1.ano - data2.ano) * 365 + (data1.mes - data2.mes) * 30 + (data1.dia - data2.dia);
    return delta;
}
