#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std; 
/* PROBLEMATICA: Leer un programa que cada 4 horas tome la temperatura exterior, leyendola durante un periodo de 24 dias.

                ANALISIS
    ::::::::::::::::::::::::::::::::
	1) PROBLEMA PRINCIPAL: Leer la temperatura cada 4 horas en un periodo de 24 horas.
	2) PROBLEMA SECUNDARIO: Promedio de la temperatura media del dia, la temperatura mas alta y la mas baja.
	3) CONCLUSIONES: 
	Debe leer 6 temperaturas. Calcular la temperatura media del dia, la temperatura más alta y la más baja;
	        1) Generar un for (hora = 0, hora<=24, hora+=4)
	        2) Generar el promedio_temperatura_dia = suma_temperatura_horas/6
	        3) Buscar la temperatura más baja
	            3) Generar if
	        4) Buscar la temperatura más alta
	            4.1) Generar if
	4) VARIABLES:
	        1) int temperatura_hora, promedio_temperatura_dia, temperatura_mas_alta, temperatura_mas_baja, hora, suma_temperatura_horas, temperatura_mas_alta, temperatura_mas_baja.
	5) FORMULAS:
	        1) promedio_temperatura_dia = suma_temperatura_horas/6
	6) DATOS DE PRUEBA:
	::::::::::::::::::::::::::::::::
	*/

int main(int argc, char *argv[]) {
	float temperatura_hora, promedio_temperatura_dia, suma_temperatura_horas = 0, temperatura_mas_alta =-1000, temperatura_mas_baja = 999;
	int hora;
	
	for (hora = 0; hora<24; hora+=4){
		printf ("Digite la temperatura\n");
		cin >> temperatura_hora;
		suma_temperatura_horas += temperatura_hora;
		if (temperatura_hora>temperatura_mas_alta){ // Si temperatura_horas > temperatura_mas_alta entonces temperatura_horas se asgina a temperaruta_mas_alta
			temperatura_mas_alta = temperatura_hora;
		}
		if (temperatura_hora<temperatura_mas_baja){
			temperatura_mas_baja = temperatura_hora;
		}
	}
	promedio_temperatura_dia = suma_temperatura_horas/6;
	printf ("La temperatura mas alta del dia fue %.1f\n", temperatura_mas_alta);
	printf ("La temperatra mas baja del dia fue %.1f\n", temperatura_mas_baja);
	printf ("La temperatura media del dia fue %.2f\n", promedio_temperatura_dia);
	
	return 0;
}
