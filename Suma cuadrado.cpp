#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
using namespace std;
/* PROBLEMATICA: Realize un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero.*/

int main(int argc, char *argv[]) {
	float suma_cuadrados_numero = 0;
	int limite;
	printf ("%c Hasta que n%cmero quieres iterar: ", 175, 163);
	cin >> limite;
	for (int iterador = 1; iterador<=limite; iterador++){
		suma_cuadrados_numero += pow(iterador,2);
	}
	printf ("La suma de los cuadrados de los 10 primeros numeros es %.1f", suma_cuadrados_numero);
	getch();
	
	return 0;
}
