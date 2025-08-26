#include<stdio.h>
#include"conversor.h"

int menu(){

    int escolha;
    int conf = 1;

    do{
        // menu
        printf("\n------MENU------");
        printf("Digite o número para fazer sua escolha: \n");
        printf("1. Celsius para Fahrenheit \n");
        printf("2. metros para km \n");
        printf("3. segundos para minutos \n");

        scanf("%d", &escolha);

        switch (escolha)
            {
            case 1:
                int celsiusToF();
                break;

            case 2:
                int mTokm();
                break;
            
            case 3:
                int secToMin();
                break;
            
            default:
                break;
            }
    }
    while(conf = 1);


    return 0;
}

int celsiusToF(){
    int celsius;
    int farenheit;

    printf("digite o valor em Celsius: \n");
    scanf("%d", &celsius);

    farenheit = celsius * 32;
    printf("%d", &farenheit);
    return 0;
}

int mTokm(){
    int m;
    float km;

    printf("digite o valor em metros: \n");
    scanf("%d", &m);

    km = m / 1000;
    printf("%f", &km);
    return 0;
}

int secToMin(){
    int s;
    int minutes;

    printf("digite o valor em segundos: \n");
    scanf("%d", &s);

    minutes = s * 60;
    printf("%d", &minutes);
    return 0;
}