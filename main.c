#include <stdio.h>
#include "fracao.h"

int main(){
    Fracao *f1, *f2;
    f1 = criar(1,2);
    f2 = criar(3,4);
    Fracao *f3 = somar(f1, f2);
    imprimir(f1);
    imprimir(f2);
    imprimir(f3);

    destruir(f1);
    destruir(f2);
    destruir(f3);

    // printf("Hello World");

    return 0;
}