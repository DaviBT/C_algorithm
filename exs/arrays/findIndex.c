#include<stdio.h>

int main (){
    int tamanho = 5;
    int lista[tamanho]; 

    for(int x = 0; x < tamanho; x++){
        printf("Digite um número: \n");
        scanf("%d", &lista[x]);
    }

    int numeroBuscado;
    printf("Digite um valor que você digitou anteriormente: \n");
    scanf("%d", &numeroBuscado);

    int indexNum;

    for(int x = 0; x < tamanho; x++){
        if(lista[x] == numeroBuscado){
            indexNum = x;
        }
    }

    printf("O index do número que você buscou na lista é: %d", indexNum);

    return 0;
}