Funcion no1 <- exponentes ( no1,fijo,no2 )
	Para i=0 Hasta no2-2 Con Paso 1 Hacer
		no1=no1*fijo;
	Fin Para
Fin Funcion

Algoritmo exponente
	definir no1 como entero
	definir no2 como entero
	definir fijo como entero
	escribir "Ingresar un numero para base";
	leer no1
	fijo=no1
	escribir "Ingresar un numero para exponente";
	leer no2;
	escribir exponentes(no1,fijo,no2);
	
FinAlgoritmo
