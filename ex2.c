#include <stdio.h>

int main(){

    float a = 0.0, b = 0.0, c = 0.0;

    printf("Insira um numero: ");
    scanf("%f", &a);

    printf("Insira outro numero: ");
    scanf("%f", &b);

    printf("Insira mais um numero: ");
    scanf("%f", &c);

    if(a < b && a < c)
        printf("O menor numero eh o %.2f", a);

    else if(b < a && b < c)
        printf("O menor numero eh o %.2f", b);
    else
        printf("O menor numero eh o %.2f", c);
        
    return 0;
}