#include <iostream>
#include <conio.h>
using namespace std;
/* Analisis
   ::::::::::::::::::::::::
   1) Problema principal: Generar suma de factoriales = G(x)+G(x)

   2) Problema secundario: Generar cada factorial. 
         For (iterador=numero; i<=numero; ++i){
             factorial = numero*numero;            = G(x)
		 }
		 printf ("X = %d\n", factorial);
   3) Solución: 
   
   3) Variables: numero, factorial = 1; iterador, numero_2, factorial_2 = 1; iterador_2;
   4) Formulas:
   5) Datos de prueba:
   :::::::::::::::::::::::: 
 */

int main(int argc, char** argv) {
	int numero, suma = 0, factorial = 1;
	do{
		printf ("%c Digita el n%cmero al que quieres calcular su factorial: ", 175, 163);
	    cin >> numero;
	}while (numero<0);
	
	for (int iterador = 1; iterador<=numero; ++iterador){
		printf ("%c Iterando en: %d\n", 175, iterador);
		factorial *= iterador;
		suma += iterador;
	}
	printf ("%c El factorial de %d es: %d\n%c La suma consecutiva del n%cmero es: %d", 175, numero, factorial, 175, 163, suma);
	getch();
	return 0;
}
