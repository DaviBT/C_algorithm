// nota final


// stdio in and out, permite input e print
#include <stdio.h> 
#include <math.h>

int main(){
    float nf, lab, lab1, lab2, lab3, pj, pv;

    // labs
    printf("Digite a nota do lab 1: ");
    scanf("%f", &lab1);
    // %f -> representa float; &lab1 -> diz que o input será armazenado no endereço de memória do lab1

    printf("Digite a nota do lab 2: ");
    scanf("%f", &lab2);
    
    printf("Digite a nota do lab 3: ");
    scanf("%f", &lab3);

    // pj
    printf("Digite a nota do projeto:");
    scanf("%f", &pj);

    // pv
    printf("digite a nota do PV:");
    scanf("%f", &pv);

    // calculo nota lab
    lab = (lab1 + lab2 + lab3) / 3;

    // calculo nf
    nf = (0.2 * lab) + (0.8 * sqrt(pj * pv));

    printf("sua nota final foi %.1f\n", nf);
    // a porcentagem delimita que o espaço será preenchido  uma casa decimal

    return 0;
}