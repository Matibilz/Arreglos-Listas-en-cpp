#include <iostream>
#include <conio.h>
using namespace std;

/*Problematica: */

int main(int argc, char *argv[]) {
	int exponente, numero, exponente_numero=1;
	
	printf ("%c Digita un n%cmero: ", 175, 163);
	cin >> numero;
	
	printf ("Digite el exponente al cual elevar: ");
	cin >> exponente;
	
	for (int iterador = 1; iterador<=exponente; iterador++){
		exponente_numero *=numero;
		
	}
	printf ("%d\n", exponente_numero);

	return 0;
}
