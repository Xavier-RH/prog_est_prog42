/* Autor: Xavier Romero Hernández, Realizado: 31/03/2022 
	Hacer un programa que utilice la libreria string para
	usar cadenas de caracteres y sus funciones mas comunes
	*/
	
#include <stdio.h>
#include <string.h>

int main(){
	char nombre[30]="Xavier Romero Hernandez";
	char *carrera="Ing. Sistemas Computacionales";
	char nombre2[30];
	int longitud;
	printf("Introduce el nombre: ");
	fgets(nombre2,30,stdin);
	
	printf("Nombre: [%s]\n",nombre2);
	printf("Nombre: [%s]\n",nombre);
	printf("Carrera: [%s]\n",carrera);
	
	longitud=strlen(nombre2);
	printf("La longitud de nombre2 es %d\n",longitud);
	if(strlen(nombre)>strlen(nombre2)){
		printf("Nombre tiene mas caracteres\n");
	}
	else{
		printf("Nombre2 tiene mas caracteres\n");
	}
	strcpy(nombre2,"Hola mundo!!");
	printf("Nombre2 = [%s]",nombre2);
	
	return 0;
}
