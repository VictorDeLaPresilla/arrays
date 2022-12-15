/*Ejercicio 4: Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro de su respectiva variable, y luego intercambiar el  contenido de los arrays.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define TAM 30
int main()
{
	char nombre1[TAM], nombre2[TAM], nombre3[TAM];
	printf("introduzca el primer nombnre\n");
	gets(nombre1);
	printf("introduzca el segundo nombre\n");
	gets(nombre2);
	strcpy(nombre3,nombre2);
	strcpy(nombre2,nombre1);
	strcpy(nombre1,nombre3);
	printf("el primer nombre es:%s", nombre1);
	printf("\nel segundo nombre es:%s", nombre2);
	getch();
	return 0;
}
