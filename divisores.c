#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cont=0,acum=0;

    printf("Entre com o num:\n");
    scanf("%d",&num);

    for(int i=1;i<1000;i++){

        if(num%i==0){
            if(i==num)
                continue;
            cont++;
            acum=acum+i;
        }
            
    }
    if(acum==num)
        printf("\nNumero perfeito\n");

    printf("total divsores %d\n",cont);
    printf("soma divisores %d\n",acum);

    return 0;
}
