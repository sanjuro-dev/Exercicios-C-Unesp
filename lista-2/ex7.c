# include <stdio.h>


typedef struct{
    float x;
    float y;
    float z;
}vetor;


vetor soma(vetor a, vetor b){
    vetor c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.z = a.z + b.z;
    return c;
}

