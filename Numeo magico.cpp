#include <iostream>
#include <stdlib.h> //control de procesos.
#include <conio.h> //Entrada y salida de datos.
#include <time.h> //Funcion time(); en especifico time(NULL);
using namespace std;
/*
 Realizar un programa que solciite al usuario que piense en un numero enero entre 1 y 100. El programa debe generar un numero aleatorio en
 ese mismo rango [1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, asi hasta que lo adivine, y por
 ultimo mostrarle el numero de intentos que le llevó.

                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL: El usuario debe acertar al numero generado aleatoriamente.
	2) PROBLEMA SECUNDARIO: Generar un numero aleatorio ente [1-100] y mostrar cuantos intentos le tomo acertar.
	3) CONCLUSIONES:
	3.1) Introducir un numero entre el intervalo de [1-100]: Generar un ciclo do-while, si el numero no está dentro del intervalo, repetir hasta que suceda.
	3.2) Generar un numero aleatorio entre el mismo intervalo: primero srand(time(NULL)); //"Ponemos a girar la diana"// rand(); para generar el numero aleatorio.
	3.3) Usar condicionales para ayudar a la persona a encontrar el numero generado.
	3.4) While (numero_escrito==numero_aleatorio) con eso generamos la iteración hasta encontrar el numero correcto.
	4) VARIABLES: numero_escrito, numero_aleatorio, intentos = 0;
	5) FORMULAS: 2 variables: tengo tres casos. 
        5.1)numero_escrito<numero_aleatorio
        5.2)numero_escrito>numero_aleatorio
        5.3)numero_escrito == numero_aleatorio
	6) DATOS DE PRUEBA:
	Numero_aleatorio Numero_escrito Valor acercamiento
	81               50               +31
	92               5                +87
	47               3                +44
	50               62               -12
	50               50               0 //Acertaste.
	::::::::::::::::::::::::::::::::
	*/
int main(int argc, char** argv) {
	int numero_escrito, numero_aleatorio, primera_variable, segunda_variable, contador = 1;
	srand(time(NULL)); //Empieza la aleatoriedad de los numeros al ocupar semillas diferentes del tiempo del procesador.
	do{
		numero_aleatorio = 1+rand()%101-1; //Generar un numero entre 1 y 100	
	}while(numero_aleatorio<1);
	//cout << numero_aleatorio << endl; //Si quieres conocer el numero entonces quita el comentario de esta linea.
	
	while (numero_escrito!=numero_aleatorio){ //Realizar ciclo mientras el numero_escrito sea diferente al numero_aleatorio
		do{
		cout << "Piensa, digita un numero entre 1 y 100 y acercate al numero magico\n"; cin >> numero_escrito;
	    }while(numero_escrito<1||numero_escrito>100);
		if (numero_escrito>numero_aleatorio){
			primera_variable = numero_escrito-numero_aleatorio;
			cout << "Estas a -" << primera_variable << " del numero aleatorio"<< endl;
			contador++;
		}
		if (numero_escrito<numero_aleatorio){
			segunda_variable = numero_aleatorio-numero_escrito;
			cout << "Estas a + " << segunda_variable << " del numero aleatorio" << endl;
			contador++;
		}
	}
	printf ("Has acertado al numero: %d en %d intentos", numero_aleatorio, contador);
	getch();
	return 0;
}
