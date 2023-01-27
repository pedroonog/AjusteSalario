#include <stdio.h>
#include <stdlib.h>
//3. Dado o valor atual do salário de um funcionário, informe o valor de seu salário reajustado, de acordo com os percentuais
//indicados a seguir:
//* 50% para aqueles que recebem até R$ 2.000,00.
//* 20% para aqueles que recebem mais de R$ 2.000,00 e menos de R$ 5.000,00.
//* 10% para os demais.

void main ()
{
	float salario;
	
	printf("\n\n Digite seu salario: ");
	scanf("%f",&salario);
	
	if(salario<=2000)
	printf("\n\n Salario reajustado e: %.2f",salario*1.5);
		else
			if((salario>2000)&&(salario<=5000))
			printf("\n\n Salario reajustado e: %.2f",salario*1.2);
				else
				printf("\n\n Salario reajustado e: %.2f", salario*1.1);	
	
}
