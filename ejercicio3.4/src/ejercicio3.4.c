/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//ejercicio3.1
void MuestraPorPantalla(int num);
int main(void) {

	int numero;
	do{
		printf("Ingrese un numero 0-100: ");
		scanf("%d", &numero);
	}while(numero < 0 || numero>100);
	MuestraPorPantalla(numero);



	return EXIT_SUCCESS;
}

void MuestraPorPantalla(int num)
{
	printf("El numero: %d", num);
}


//ejercicio3.2
/*float RetornaFloat(void);
int main(void) {

	float resul;
	resul = RetornaFloat();
	printf("El numero es: %.2f\n", resul);


	return EXIT_SUCCESS;
}
float RetornaFloat(void)
{
	float num;
	do{
		printf("Ingrese un numero 1-60: ");
		scanf("%f", &num);
	}while(num < 1 || num >60);
	return num;

}*/
