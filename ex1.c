#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // int num = 86;
    // int uni = 0, dez = 0, cen = 0, mil = 0, d_mil = 0;

    // uni = num % 10;
    // dez = ((num % 100) - uni) / 10;
    // cen = ((num % 1000) - uni - (dez * 10)) / 100;
    // mil = ((num % 10000) - uni - (dez * 10) - (cen * 100)) / 1000;
    // d_mil = ((num % 100000) - uni - (dez * 10) - (cen * 100) - (mil * 1000)) / 10000;

    // printf("%d | %d | %d | %d | %d", d_mil, mil, cen, dez, uni);

    int n, tmp = 0, var = 10000;

    printf("Insira um numero entre 1 e 32767: ");    
    scanf("%d", &n);

    if(n >= 1 && n <= 32767){

        while(n != 0){

            tmp = n / var;

            if(tmp != 0){
                printf(" %d ", tmp % 10);
            }

            var /= 10;

        }
    } else  {
        printf("Por favor insira um numero entre 1 e 32767!");
    }

    // char num[] = "221486";
    // int n = 0;

    // printf("Digite um valor entre 1 e 32767: ");
    // scanf("%s", &num);

    // n = atoi(num);

    // if(n <= 32767 && n >= 1){

    //     for(int i = 0; i < strlen(num); i++){
    //         printf(" %c ", num[i]);
    //     }

    // } else {
    //     printf("Insira um valor entre 1 e 32767!");
    // }


    return 0;
}