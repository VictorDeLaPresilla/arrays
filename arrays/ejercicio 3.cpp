/*Hacer 2 arrays de cadena de caracteres, pedir el nombre al usuario guardarlo dentro de un array y luego, copiar el contenido de ese array a otro.*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define TAM 30
int main ()
{

	char arreglo1[TAM], arreglo2[TAM];
	printf ("digite su nombre \n");
	gets(arreglo1);
    strcpy(arreglo2,arreglo1);
    printf("su nombre es:%s\n",arreglo2);
	getch();
	return 0;
}

