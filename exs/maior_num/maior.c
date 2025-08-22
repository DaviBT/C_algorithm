#include<stdio.h>
#include"maior.h"

int maior_menor(){

    int num1;
    int num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num1 > num2){
        return num1;
    }
    else if(num1 == num2){
        return printf("equal numbers");
    }
    else{
        return num2;
    }
}