#include <stdio.h>
#include <stdlib.h>
#include "fracao.h"

Fracao *criar (int num, int den){
    if(den == 0) return NULL;

    Fracao *f = (Fracao *) malloc(sizeof(Fracao));

    f -> num = num;
    f -> den = den;

    return f;

}

void imprimir (Fracao *f){
    if(f != NULL){
        printf ("%d / %d\n", f->num, f->den);
    }
}

void destruir(Fracao *f){
    if(f != NULL){
        free(f);
        f = NULL;
    }
}

int mdc(int a, int b){

    if(b == 0) return a;
    
    else return mdc(b, a % b);
}

int mmc (int a, int b){
    return a * b / mdc(a, b);
}

Fracao *somar(Fracao *f1, Fracao *f2){
    if (f1== NULL || f2 == NULL)  return NULL;

    Fracao *f = (Fracao *)malloc(sizeof(Fracao));
    if(NULL) return NULL;

    f-> den = mmc(f1->den, f2->den); 
    f-> num = (f1->den / f2 -> den ) * f1->num + (f -> den / f2 -> den ) *f2->num;

    return f; 
}