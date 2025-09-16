#include<stdio.h>

int main (){
    int tamanho = 10;
    int lista[tamanho]; 
    int soma = 0;
    int positivos = 0;

    for(int x = 0; x < 10; x++){
        printf("Digite um número: \n");
        scanf("%d", &lista[x]);

        soma += lista[x];

        if (lista[x] % 2 == 0){
            positivos++;
        }
    }

    printf("Soma de todos: %d \n", soma);
    printf("Quantidade de positivos: %d", positivos);

    return 0;
}
