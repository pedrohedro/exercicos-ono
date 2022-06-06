#include <stdio.h>
#include <math.h>

void calculaBhaskara(float a, float b, float c, float* x1, float* x2){

    float delta;

    delta = b * b - 4 * a * c;
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);

    if(delta < 0) {
        printf("A equacao nao possui raizes reais.");
    } else {
        printf("O valor de x1: %.2f\n", *x1);
        printf("O valor de x2: %.2f\n", *x2);
    }

}

int main(){

    float x1, x2;
    float a, b, c;

    printf("Digite o valor do termo a: ");
    scanf("%f", &a);
    printf("Digite o valor do termo b: ");
    scanf("%f", &b);
    printf("Digite o valor do termo c: ");
    scanf("%f", &c);
    
    calculaBhaskara(a, b, c, &x1, &x2);    

    return 0;
}
