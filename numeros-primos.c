#include <stdio.h>
#include <stdbool.h>

bool verificarPrimo(int num);

int main (){
	
	int num;
	bool primo;
	
	printf("Entre com um numero inteiro: ");
	scanf("%d", num);
	
	primo = verificarPrimo(num);
	
	printf("%d primo = %d\n:", num, primo);
	
	
	return 0;
}


bool verificarPrimo(int num)
{
	int divisores = 0;
	
	for(int i = 1; i <=num; i++)
	{
		if (num % i == 0)
		{
			divisores++;
			printf("%d ", i);
		}
	}
	printf("\n");
	if (divisores == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
