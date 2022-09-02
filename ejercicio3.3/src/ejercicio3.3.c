/*
 ============================================================================
 Name        : 3.c
 Author      : Adriana Maria Davalos Insaurralde
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int CalculaPar(int num);
int main(void) {

	int numeroIngresado;
	int resul;
	printf("\nIngrese un numero: ");
	scanf("%d",&numeroIngresado);

	resul = CalculaPar(numeroIngresado);
	if(resul == 1){
		printf("El numero es par");
	}else
	{
		printf("El numero es impar");
	}
	return EXIT_SUCCESS;
}
int CalculaPar(int num)
{
	int retorna;
	retorna = 0;
	if(num % 2 == 0)
	{
		retorna = 1;
	}
	return retorna;

}
