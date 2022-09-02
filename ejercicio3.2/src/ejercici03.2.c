/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float RetornaFloat(void);
int main(void) {

	float resul;
	resul = RetornaFloat();
	printf("El numero es: %.2f\n", resul);


	return EXIT_SUCCESS;
}
float RetornaFloat(void)
{
	float num;
	printf("Ingrese un numero: ");
	scanf("%f", &num);

	return num;

}
