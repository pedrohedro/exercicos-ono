#include <stdio.h>

int main(){

    int digito, dec;
    int bin = 0;
    int pot = 1;

    printf("Insira um numero para ve-lo em formato binario: ");
    scanf("%d", &dec);
    
    while (dec > 0)
    {
        digito = dec % 2;
        bin += digito * pot;
        pot *= 10;
        dec /= 2;
    }

    printf("%d", bin);

    return 0;
}
