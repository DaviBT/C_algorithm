#include <stdio.h>

int main(){   
    int v[] = {10, 20, 30, 40, 50};
    // array length
    int len = *(&v + 1) - v;

    // inicio e fim do array
    int *i = v;
    int *f = v + len;

    while(i < f){
        printf("O endereco de memoria desse elemento: %p  e seu valor: %d \n", (void*)i, *i);
        i++;
    };
}