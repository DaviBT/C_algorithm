#include <stdio.h>

int main(){

    int five = 5;
    int numbers[5];
    int num = 0;

    FILE *file = fopen("numbers.txt", "w");
        if (file == NULL){
            printf("Erro ao abrir o arquivo");
            return 1;
        }

    for(int i = 0; i < 5; i++){
        
        printf("Digite um numero: \n");
        scanf("%d", &num);

        fprintf(file, "%d\n", num);

        
    }
    fclose(file);
    
    printf("numeros no arquivo: \n");
    file = fopen("numbers.txt", "r");
    while (!feof(file)) {
        if (fscanf(file, "%d", &num) == 1) {
            printf("%d\n", num);
        }
    }
    fclose(file);

    int soma = 0;
    file = fopen("numbers.txt", "r");
    while(!feof(file)){
        if(fscanf(file, "%d", &num) == 1){
            soma += num;
        }
    }
    printf("o resultado da soma de todos os numeros e: %d \n", soma);

    return 0;
}


