 typedef struct{
    int num, den;
} Fracao;

Fracao *criar(int num, int den);
Fracao *somar(Fracao *f1, Fracao *f2);
void imprimir (Fracao *f);
void destruir(Fracao *f);