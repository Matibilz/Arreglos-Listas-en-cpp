#include <iostream>
#include <conio.h>
using namespace std;

/* PROBLEMATICA: Escribir un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.

    ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL: Generar enesimas entradas hasta que se digite un 0 o un numero en el rango entre [20-30]
	2) PROBLEMA SECUNDARIO: Sumar la entrada de n numeros mayores a 0.
	3) CONCLUSIONES: 
	        3.1) Para generar n-entradas con una condicion de termino: do-while
	        3.2) Sumar la entrada de numeros > 0
	4) VARIABLES:
	        4.1) int numero, contador_positivos 
	5) FORMULAS:
	        5.1) contador_positivos += numero;
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
	*/

int main(int argc, char *argv[]) {
	int numero, contador_positivos = 0;
	printf ("%c Digita n%cmeros positivos diferente de 0, si el n%cmero se encuentra entre 20-30 entonces se proceder%c a realizar la suma de estos n%cmeros\n", 175, 163, 163, 160, 163);
	do{
		printf ("%c Digita un n%cmero: ", 175, 163);
		cin >> numero;
		
		if (numero>0){
			contador_positivos += numero;
		}
		
	}while(((numero<20) || (numero>30)) && (numero != 0));
	
	printf ("%c La suma de los n%cmeros digitados es: %d", 175, 163, contador_positivos);
	
	return 0;
}
