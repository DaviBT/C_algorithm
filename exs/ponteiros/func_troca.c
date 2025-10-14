#include <stdio.h>

int troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
    return 0;
}

int main(){
    int a = 1;
    int b = 2;
    printf("o valor de a e b antes da troca são a = %d e b = %d\n", a, b);
    printf("o valor do endereço de a e b antes da troca são a = %p e b = %p\n", &a, &b);
    int s = troca(&a, &b);
    printf("depois da funcao, a = %d\n e b = %d\n", a, b);

    return 0;
}
