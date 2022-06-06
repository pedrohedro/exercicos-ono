#include <stdio.h>

int main(){

int n, reverso = 0, temp;    

printf("Insira um numero: ");    
scanf("%d", &n);    

while(n != 0){

    temp = n % 10;    
    reverso = reverso * 10 + temp;    
    n /= 10;    

}    

printf("%d", reverso);

return 0;
}

//     int n, temp, var = 10;

//     printf("Digite um numero: ");
//     scanf("%d", &n);

//     while(n / (var / 10) != 0){

//         temp = n % var;

//         if(temp > 10 && temp < 100) temp /= 10;

//         if(var > 100){
//             temp /= var / 10;
//         }
        
//         printf(" %d ", temp);

//         var *= 10;

//     }