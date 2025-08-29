#include "funcoes.h"
#include <stdio.h>

int menu(){
    int escolha;
    while(1){
        // menu
        printf("\n------MENU------\n");
        printf("Digite o número para fazer sua escolha de cálculo de área: \n");
        printf("1. Círculo \n");
        printf("2. Retângulo \n");
        printf("3. Triângulo \n");
        printf("4. Sair \n");

        scanf("%d", &escolha);

        switch (escolha)
            {
            case 1:
                circulo();
                break;

            case 2:
                retangulo();
                break;
            
            case 3:
                triangulo();
                break;
            case 4:
                break;
            
            default:
                break;
            };
    };

    return 0;
};

int circulo(){
    float raio;
    float area;
    float pi;

    pi = 3.14;

    printf("Digite o raio do círculo: \n");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("%f", area);

    return 0;
};

int retangulo(){
    float lado1;
    float lado2;
    float area;

    printf("Digite o primeiro lado do retângulo: \n");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do retângulo: \n");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("%f", area);

    return 0;
};

int triangulo(){
    float base;
    float altura;
    float area;

    printf("Digite a base do triângulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: \n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("%f", area);

    return 0;
};