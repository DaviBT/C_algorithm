#include <stdio.h>

int f_iter(int n){
    int x = 0;
    if(n == 1){
        return x;
    }
    int y = 1;
    if(n ==2){
        return y;
    }
    int aux;
    for(int i = 0; i < n -2; i++){
        aux = y;
        y += x;
        x = aux;
    }
    return y;
}
/*
x | Y
0   1
1   1
1   2
2   3
3   5


o aux guarda o valor e posteriormente o valor de Y é substituido
*/

int f_rec(int n){
    if (n== 1 || n == 2){
        return n - 1;
    }
    return f_rec(n - 1) + f_rec(n - 2);
}
// recursao faz a arvore de recursao, onde a funcao é constantemente chamada para os calculos acontecerem

int main(){
    printf("iterativa %d\n", f_iter(6));
    printf("recursiva %d\n", f_rec(6));

    return 0;
}