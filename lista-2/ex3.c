# include <stdio.h>

typedef struct {
    int a;
    int b;
}complexo;

void lerComplexo(complexo *c){
    printf("Digite a parte real: ");
    scanf("%d", &c->a);
    printf("Digite a parte imaginaria: ");
    scanf("%d", &c->b);
}

void imprimirComplexo(complexo c){
    printf("%d + %di\n", c.a, c.b);
}

complexo somaComplexo(complexo c1, complexo c2){
    complexo c;
    c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
    return c;
}

complexo subtraiComplexo(complexo c1, complexo c2){
    complexo c;
    c.a = c1.a - c2.a;
    c.b = c1.b - c2.b;
    return c;
}

complexo multiplicaComplexo(complexo c1, complexo c2){
    complexo c;
    c.a = c1.a * c2.a - c1.b * c2.b;
    c.b = c1.a * c2.b + c1.b * c2.a;
    return c;
}

