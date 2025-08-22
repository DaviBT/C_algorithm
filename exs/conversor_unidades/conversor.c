#include <stdio.h>

int main(){
    int escolha;
    int conf = 1;

    do{
        // menu
        printf("------MENU------");
        printf("Digite o número para fazer sua escolha: \n");
        printf("1. Celsius para Fahrenheit");
        printf("2. metros para km");
        printf("1. segundos para minutos");

        scanf("%d", &escolha);

        switch (escolha)
            {
            case 1:
                celsiusToF();
                break;
            
            default:
                break;
            }
    }
    while(conf = 1);

}