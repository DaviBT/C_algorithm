#include <stdio.h>
#include <string.h>

int main(){
    int hora, minuto, segundo, meia_noite, sgs_que_passaram, sgs_restantes_meia_noite;

    printf("Qual a hora atual?: ");
    scanf("%i", &hora);
    printf("Qual o minuto atual?: ");
    scanf("%i", &minuto);
    printf("Qual os segundos atual?: ");
    scanf("%i", &segundo);

    // tempo que passou

    sgs_que_passaram = (hora * 60 * 60) + (minuto * 60) + segundo;

    // tempo que falta
    meia_noite = (24 * 60 * 60);

    sgs_restantes_meia_noite = meia_noite - sgs_que_passaram;

    // print
    printf("faltam %d s para meia-noite ", sgs_restantes_meia_noite);

    printf("já se passaram %d s desde a meia-noite \n", sgs_que_passaram);


    return 0;
}