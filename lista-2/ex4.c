# include <stdio.h>

typedef struct{
    int a;
    int b;
}rtn;


void lerrtn(rtn *r){
    printf("Digite o numerador: ");
    scanf("%d", &r->a);
    printf("Digite o denominador: ");
    scanf("%d", &r->b);
    if(r->b == 0){
        printf("Denominador invalido.");
    }

}

int mmc(int a, int b){
    int i;
    for(i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}




rtn simplificartn(rtn r){
    int m;
    m = mmc(r.a, r.b);
    r.a = r.a / m;
    r.b = r.b / m;
    return r;
}

rtn somartn(rtn r1, rtn r2){
    rtn r;
    r.a = r1.a * r2.b + r1.b * r2.a;
    r.b = r1.b * r2.b;
    return simplificartn(r);
}

rtn subrtn(rtn r1, rtn r2){
    rtn r;
    r.a = r1.a * r2.b - r1.b * r2.a;
    r.b = r1.b * r2.b;
    return simplificartn(r);
}

rtn multrtn(rtn r1, rtn r2){
    rtn r;
    r.a = r1.a * r2.a;
    r.b = r1.b * r2.b;
    return simplificartn(r);
}

rtn divrtn(rtn r1, rtn r2){
    rtn r;
    r.a = r1.a * r2.b;
    r.b = r1.b * r2.a;
    return simplificartn(r);
}



