#include <iostream>
#include <conio.h>
using namespace std;
/*PROBLEMATICA:
                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL: Generar suma de 1+2+3+4+...+n
	2) PROBLEMA SECUNDARIO: 
	3) CONCLUSIONES:
	4) VARIABLES:
	5) FORMULAS:
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
	*/

int main(int argc, char** argv) {
	int numero, suma_auxiliar = 0;
	printf ("%c Digita hasta que n%cmero quieres sumar consecutivamente: ", 175, 163);
	cin >> numero;
	for (int iterador = 0; iterador<=numero; iterador++){
		suma_auxiliar +=iterador;
	}
	printf ("%c La suma consecutiva hasta %d es: %d", 175, numero, suma_auxiliar);
	return 0;
}
