#include <iostream>
#include <conio.h>
using namespace std;
/* Escriba un programa que calcule el valor de :1+3+5+2n-1 */

int main(int argc, char *argv[]) {
	int numero, suma_impares=0, auxiliar;
	
	printf ("%c Digita el n%cmero hasta el cual quieres sumar, si este es par entonces sumar%c hasta el n%cmero impar anterior a tu n%cmero\n", 175, 163, 130, 163, 163);
	cin >> numero;
	
	for (int iterador = 0; iterador<=numero; iterador++){
		if (iterador%2!=0){
			printf ("Iterando en: %d\n", iterador);
			suma_impares = suma_impares+iterador;
			auxiliar = iterador;
		}
	}
	printf ("%c La suma de los numeros impares desde 0 hasta %d es %d\n", auxiliar, suma_impares, 175);
	getch();
	return 0;
}
