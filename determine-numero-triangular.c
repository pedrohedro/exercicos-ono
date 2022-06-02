#include <stdio.h>
#include <stdlib.h>

int determinarNumeroTriangular(int n);

int main()
{
    int  num,nt;

    printf("Entre com um inteiro positivo:\n");
    scanf("%i",&num);

    for(int i=1;i<=num;i++)
        nt=determinarNumeroTriangular(i);
    printf("nt = %d\n",nt);

    return 0;
}

int determinarNumeroTriangular(int n){
    static int nt=0; //static significa, na ling. C,
    return nt=nt+n;
    
}

