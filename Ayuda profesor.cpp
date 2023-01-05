#include <iostream>
using namespace std;

/*
                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL:
	   1.1) Generar un ciclo repetitivo para la entrada de 5 notas para cada uno de los certamenes.
	2) PROBLEMA SECUNDARIO:
	   2.1) Al final de cada iteracion de una evaluacion, calcular el promedio, alumnos aprovados y rechazados
	3) CONCLUSIONES:
	   3.1) Las notas deben estar en un rango [1.0-7.0].
	   3.2) Si nota esta entre el rango entonces sumar +1 al contador_nota_certamen;
	   3.3) Para sumar las notas realizar: suma_notas = suma_notas + notas; definir suma_notas = 0;
	   3.4) Para calcular el promedio de las notas realizar: promedio_notas = suma_notas_certamen/contador_notas_certamen; 
	   3.5) Para calcular cuantos alumnos fueron reprobados realizar: if (nota<4.0){ contador_repovados_primer_certamen++, de parecida manera para calcular cuantos alumnos fueron aprovados.
	   3.6) Para realizar 3 ciclos do-while con la misma variable, volvemos a definir a alumnos = 1 al final de cada ciclo.
	4) VARIABLES: 
	5) FORMULAS:
	   5.1) suma_nota_primer_certamen += nota_primer_certamen;
	   5.2) promedio_general_primer_certamen = suma_nota_primer_certamen/contador_nota_primer_certamen;
	   
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
*/

int main(int argc, char** argv) {
	int alumnos = 1, contador_nota_primer_certamen = 0, contador_repovados_primer_certamen = 0, contador_aprovados_primer_certamen = 0; //Para el primer do-while
	float nota_primer_certamen, suma_nota_primer_certamen = 0, promedio_general_primer_certamen; //Para el do-while
	int contador_nota_segundo_certamen = 0, contador_reprovados_segundo_certamen = 0, contador_aprovados_segundo_certamen = 0;
	float nota_segundo_certamen, suma_nota_segundo_certamen = 0, promedio_general_segundo_certamen;
	int contador_nota_tercer_certamen = 0, contador_reprovados_tercer_certamen = 0, contador_aprovados_tercer_certamen = 0;
	float nota_tercer_certamen, suma_nota_tercer_certamen = 0, promedio_general_tercer_certamen;
	
	cout << "Para el primer certamen\n";
	cout << "::::::::::::::::::::::::::\n";
	
	do{ // Primer certamen.
		printf ("Digita la nota del %d alumno\n", alumnos);
		cin >> nota_primer_certamen;
		if (nota_primer_certamen>=1.0 && nota_primer_certamen<=7.0){ // 3.1
		contador_nota_primer_certamen++; //3.2
		suma_nota_primer_certamen += nota_primer_certamen; //5.1
		alumnos++;
		}
		if (nota_primer_certamen<4.0){ //3.5
			contador_repovados_primer_certamen++;
		}
		if (nota_primer_certamen>=4.0){
			contador_aprovados_primer_certamen++;
		}
	}while(alumnos<=5);
	promedio_general_primer_certamen = suma_nota_primer_certamen/contador_nota_primer_certamen; //5.2 && 3.4
	cout << "::::::::::::::::::::::\n";
	printf ("Notas ingresadas: %d\n", contador_nota_primer_certamen);
	printf ("El promedio general es: %.2f\n", promedio_general_primer_certamen);
	printf ("Alumnos aprovados: %d\nn", contador_aprovados_primer_certamen);
	printf ("Alumnos reprovados: %d\n", contador_repovados_primer_certamen);
	alumnos = 1; //3.6
	cout << endl;
	cout << "Para el segundo certamen\n";
	cout << "::::::::::::::::::::::::::\n";
	do{ //Segundo certamen
		printf ("Digita la nota del %d alumno\n", alumnos);
		cin >> nota_segundo_certamen;
		if (nota_segundo_certamen>=1.0 && nota_segundo_certamen<=7.0){ //3.1
			contador_nota_segundo_certamen++; //3.2
			suma_nota_segundo_certamen += nota_segundo_certamen; //5.1
			alumnos++;
		}
		if (nota_segundo_certamen<4.0){ //3.5
			contador_reprovados_segundo_certamen++;
		}
		if (nota_segundo_certamen>=4.0){
			contador_aprovados_segundo_certamen++;
		}
	promedio_general_segundo_certamen = suma_nota_segundo_certamen/contador_nota_segundo_certamen; //5.2 && 3.4
	}while(alumnos<=5);
	printf ("Notas ingresadas: %d\n", contador_nota_segundo_certamen);
	printf ("Promedio general es %.2f\n", promedio_general_segundo_certamen);
	printf ("Alumnos aprovados: %d\n", contador_aprovados_segundo_certamen);
	printf ("Alumnos reprovados: %d\n", contador_reprovados_segundo_certamen);
	alumnos = 1; //3.6
	cout << endl;
	cout << "Para el tercer certamen\n";
	cout << "::::::::::::::::::::::::::\n";
		do{ //Tercer certamen
		printf ("Digita la nota del %d alumno\n", alumnos);
		cin >> nota_tercer_certamen;
		if (nota_tercer_certamen>=1.0 && nota_tercer_certamen<=7.0){ //3.1
			contador_nota_tercer_certamen++;
			suma_nota_tercer_certamen += nota_tercer_certamen; //5.1
			alumnos++;
		}
		if (nota_tercer_certamen<4.0){ //3.5
			contador_reprovados_tercer_certamen++;
		}
		if (nota_tercer_certamen>=4.0){
			contador_aprovados_tercer_certamen++;
		}
	}while(alumnos<=5);
	promedio_general_tercer_certamen = suma_nota_tercer_certamen/contador_nota_tercer_certamen;
	printf ("Notas ingresadas: %d", contador_nota_tercer_certamen);
	printf ("Promedio general es %.2f\n", promedio_general_tercer_certamen);
	printf ("Alumnos aprovados: %d\n", contador_aprovados_tercer_certamen);
	printf ("Alumnos reprovados: %d\n", contador_reprovados_tercer_certamen);
	alumnos = 1; //3.6
	return 0;
}
