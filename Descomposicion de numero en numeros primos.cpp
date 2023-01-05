#include <iostream>
#include <conio.h>
using namespace std;

/*Realice un programa que calcule la descomposicion en factores primos de un numero entero
                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL: Descomponer los factores primos individualmente;
	2) PROBLEMA SECUNDARIO: Realizar la multiplicacion 
	3) CONCLUSIONES:
	   3.1) Generar un do-while para que no sea posible intoducir un numero < 1.
	   3.2) Un numero primo es aquel numero que es divisible por si mismo y por 1.
	4) VARIABLES: numero_elegido, iterador.
	5) FORMULAS:  Ocupar dos ciclos para la iteración y otro para la división del numero en sus descompuestos primos.
	6) DATOS DE PRUEBA:
	20 2 2 5
	100 2 2 5 5
	120 2 2 3 5 
	::::::::::::::::::::::::::::::::
	NUMEROS PRIMOS: 1 2 3 5 7 11 13 17 19 23 31 37 41*/

int main(int argc, char** argv) {
	int numero_elegido;
	do{ //Realizar mientras numero_elegido sea menor a 1.
		cout << "Digita un numero > 1\n";
		cin >> numero_elegido;  //150
	}while(numero_elegido<=1);
	
	for (int iterador = 2; numero_elegido>1; iterador++){
		while (numero_elegido%iterador==0){
			cout << iterador << "\n";
			numero_elegido/= iterador;
		}
	}
	getch();
	
	return 0;
}
