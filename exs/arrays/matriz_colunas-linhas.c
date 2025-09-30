#include <stdio.h>

int main(){
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i + j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}