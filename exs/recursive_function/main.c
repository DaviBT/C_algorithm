#include <stdio.h>

int f_rec(int x, int n){
    if(n == 0){
        return 1;
    }

     return (x, n -1) * x;

}

int f_iter(int x, int n){
    int res = 1;
    for(int i = 0; i < n ; i++){
        res *= x;
    }

    return res;
}

int main(){
    printf("\n recursiva: %d \n", f_rec(2,6));
    printf("iterativo: %d \n", f_iter(2,10));

    return 0;
}