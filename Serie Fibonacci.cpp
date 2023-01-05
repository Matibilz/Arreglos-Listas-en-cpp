#include <iostream>
#include <conio.h>
using namespace std;
/*  1) PROBLEMA PRINCIPAL: Generar la serie de fibonachi 1 1 2 3 5 8 13 21 34
	2) PROBLEMA SECUNDARIO: Generar n-enesimas entradas
	3) CONCLUSIONES:
	     3.1) Generar un for para n-entradas
	4) VARIABLES:
	5) FORMULAS: for(iterador = 1; iterador<=n_entradas; ++iterador){
	6) DATOS DE PRUEBA:
	    1+1 = 1
	    2+1 = 3
	    3+2 = 5
	    5+3 = 8
	    8+5 = 13*/
int main(int argc, char *argv[]) {
	int n_entradas, n = 0, y = 1, variable_auxiliar = 1;
	
	printf ("%c Cuantos n%cmeros de fibonachi quieres generar:\n", 175, 163);
	cin >> n_entradas;
	
	for (int iterador=1; iterador<=n_entradas; iterador++){
		variable_auxiliar = n + y;
		n = y;
		y = variable_auxiliar;
		printf ("%d\n", variable_auxiliar);
	}
	
	return 0;
}
