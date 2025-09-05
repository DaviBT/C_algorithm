#include <stdio.h>

int main(){
    int num, count = 0, acc = 0;

    while(1){
        do{
        printf("Digite um número: ");
        scanf("%d", &num);
        } while (num < 0 || num > 100);
        if (num ==0){
            break;
        }
        acc += num;
        count++;

        
        
    }
    float media = acc / count;

    printf("média: %f", media);

    return 0;
}