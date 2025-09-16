#include<stdio.h>

int main(){
    int tamanho = 5;
    int lista[tamanho];
    for(int x = 0; x < tamanho; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d ", &lista[x]);
    }

    for (int x = 0; x < tamanho; x++){
        printf("%d ", lista[x]);
    }

    return 0;
}