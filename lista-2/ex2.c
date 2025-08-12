# include <stdio.h>


typedef struct{
    int x;
    int y;
}ponto;

typedef struct{
    ponto p1;
    ponto p2;
}retangulo;

int pertence(retangulo r, ponto p){
    if(p.x >= r.p1.x && p.x <= r.p2.x && p.y >= r.p1.y && p.y <= r.p2.y){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    retangulo r;
    ponto p;
    printf("Digite as coordenadas do retangulo: ");
    scanf("%d %d %d %d", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);
    printf("Digite as coordenadas do ponto: ");
    scanf("%d %d", &p.x, &p.y);
    if(pertence(r, p) == 1){
        printf("O ponto pertence ao retangulo");
    }
    else{
        printf("O ponto nao pertence ao retangulo");
    }   
    return 0;
}


