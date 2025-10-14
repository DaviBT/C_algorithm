#include <stdio.h>

// ao passar um vetor de uma funcao para outra, ele vira um ponteiro, nao da para saber seu tamanho original
int soma_vetores(int a[], int b[], int res[], int len){

    // inicio e fim das arrays
    int *ia = a;
    int *fa = a + len;
    int *ib = b;
    int *fb = b + len;

    int i = 0;
    int arraySoma[len];
    int *iArraySoma = arraySoma;

    // supondo que o len e igual para ambos
    while(i < len){
        int soma = *ia + *ib;
        iArraySoma = soma;

        iArraySoma++;
    }
    int *iteradorArraySoma = arraySoma;
    while(iteradorArraySoma < len){
        printf("O endereco de memoria desse elemento: %p  e seu valor: %d \n", (void*)iteradorArraySoma, *iteradorArraySoma);
    }
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int res[5];
    soma_vetores(a, b, res, 5);

    return 0;
}

// res deve conter {11, 22, 33, 44, 55}