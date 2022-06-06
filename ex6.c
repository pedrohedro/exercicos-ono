#include <stdio.h>

int main(){
    
    int n, n1, reverso = 0, temp;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    n1 = n;
    
    //logic
    while (n > 0){
        temp = n % 10;
        reverso = reverso * 10 + temp;
        n /= 10;
    }
    
    if (n1 == reverso){
        printf("%d eh um palindromo.", n1); 
    } else {
        printf("%d nao eh um palindromo.", n1); 
    }

    
    return 0;
}