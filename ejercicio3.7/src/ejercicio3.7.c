/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void operaciones (int numeroUno, int numeroDos, char operacion);
int main(void) {
	int numeroUno;
	int numeroDos;
	char operacion;
	do{
		printf("\nIngrese primer numero:");
		scanf("%d", &numeroUno);
	}while(numeroUno < 10 ||numeroUno > 100);

	do{
		printf("\nIngrese segundo numero:");
		scanf("%d", &numeroDos);
	}while(numeroDos < 10 ||numeroDos > 100);

	do{
		printf("Ingrese s (sumar) o r (restar):");
		__fpurge(stdin);
		scanf("%c", &operacion);

	}while(operacion != 's' && operacion != 'r');

	operaciones (numeroUno, numeroDos, operacion);


	return EXIT_SUCCESS;
}

void operaciones (int numeroUno, int numeroDos, char operacion)
{
	int calculo;
	if(operacion == 's')
	{
		calculo = numeroUno +numeroDos;

	}else
	{
		calculo = numeroUno - numeroDos;

	}
	printf("El resultado de la operacion es: %d", calculo);
}
