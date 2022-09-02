/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void MuestraPorPantalla(int num);
int main(void) {

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	MuestraPorPantalla(numero);



	return EXIT_SUCCESS;
}

void MuestraPorPantalla(int num)
{
	printf("El numero: %d", num);
}
