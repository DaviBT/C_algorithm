#include <stdio.h>

int main(){
    int reset();

    int five = 5;
    int numbers[5];
    int num = 0;

    for(int i = 0; i < 5; i++){
        FILE *f = fopen("numbers.txt", "a");
        if (f == NULL){
            printf("Erro ao abrir o arquivo");
            return 1;
        }
        printf("Digite um numero: \n");
        scanf("%d", &num);

        fprintf(f, "%d", num);

        fclose(f);
    }

    return 0;
}

int reset(){
    FILE *f = fopen("numbers.txt", "w");
    fprintf(f, "%s", "");
    fclose(f);

    return 0;
}

