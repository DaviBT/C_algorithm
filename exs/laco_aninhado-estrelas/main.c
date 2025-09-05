#include <stdio.h>

int main(){
    int linhas;
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    for(int i = 0; i< linhas; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}