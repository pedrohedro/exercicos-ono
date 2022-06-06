#include <stdio.h>

int main(){ 

    int soma = 0;

    //numero a ser avaliado se é perfeito (i)
    for(int i = 1; i <= 10000; i++){

        //divisores (j)
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                soma += j;
            }
        }

        //Verifica se o número é perfeito
        if(soma == i){
            printf("%d eh um numero perfeito!\n", i);
        }

        soma = 0;
    }

    return 0;
}