#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int verificaPrimo(int n){

    int primo = 1;

    if(n != 0 && n != 1){
        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0){
                primo = 0;
                return primo;
                break;
            }
        }
    }

    // C)
    // if(n != 0 && n != 1){
    //     for(int i = 2; i <= sqrt(n); i++){
    //         if(n % i == 0){
    //             primo = 0;
    //             return primo;
    //             break;
    //         }
    //     }
    // }

    return primo;

}

int main(){
    clock_t begin = clock();

    int n = 0;

    // A)
    // printf("Insira um numero para verificar se ele eh primo ou nao: ");
    // scanf("%d", &n);

    // if(verificaPrimo(n) == 1){
    //     printf("O numero %d eh primo", n);
    // } else {
    //     printf("O numero %d nao eh primo", n);
    // }

    // B)
    for(int i = 1; i <= 100000; i++){

        if(verificaPrimo(i) == 1){
            printf("%d\n", i);
        }
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("%.6f", time_spent);
    return 0;
}
