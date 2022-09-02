/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float realizarDescuento(int numero);
int main(void) {

	int numero;
	float descuento;
		do{
			printf("\nIngrese un numero:");
			scanf("%d", &numero);
		}while(numero < 10 ||numero > 100);

	descuento = realizarDescuento(numero);

	printf("El numero es: %d y con el descuento del 5 es: %.2f", numero, descuento);
	return EXIT_SUCCESS;
}
float realizarDescuento(int numero)
{
	float descuento;
	descuento = numero * 0.95;
	return descuento;
}
