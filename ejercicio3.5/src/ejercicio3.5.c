/*
 ============================================================================
 Name        : Adriana Maria Davalos Insaurralde
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
int Restar1(int, int);
int Restar2(void);
void Restar3(int, int);
void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//int Restar1(int num1, int num2); //prototipo
//int Restar2(void);
//void Restar3(int numUno, int numDos);
void Restar4(void);
int main(void) {

	//int numUno;
	//int numDos;
	//int resultado;

	/*printf("Ingrese el primernumero: ");
	scanf("%d", &numUno);
	printf("Ingrese el primernumero: ");
	scanf("%d", &numDos);
	resultado = Restar1(numUno, numDos);// llamado a la funcion
	printf("El resultado es: %d", resultado);*/
	//resultado = Restar2();

	//printf("El resultado es: %d", resultado);

	/*printf("Ingrese el primernumero: ");
	scanf("%d", &numUno);
	printf("Ingrese el primernumero: ");
	scanf("%d", &numDos);

	Restar3(numUno, numDos);*/
	Restar4();
	return EXIT_SUCCESS;
}
/*int Restar1(int num1, int num2)//desarrollo
{
	int resta;

	resta = num1 - num2;

	return resta;

}*/

/*int Restar2(void)
{
	int numUno;
	int numDos;
	int resta;

	printf("Ingrese el primernumero: ");
	scanf("%d", &numUno);
	printf("Ingrese el primernumero: ");
	scanf("%d", &numDos);

	resta = numUno - numDos;

	return resta;

}*/

/*void Restar3(int numUno, int numDos)
{
	int resta;

	resta = numUno - numDos;

	printf("la resta es: %d", resta);

}*/
void Restar4(void)
{
	int numUno;
	int numDos;
	int resta;

	printf("Ingrese el primer numero: ");
	scanf("%d", &numUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numDos);

	resta = numUno - numDos;

	printf("la resta es: %d", resta);
}
