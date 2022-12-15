/*Hacer una matriz de tipo entera preguntándole al usuario el número 
de filas y el número de columnas, rellenar la matriz y luego mostrarla en pantalla*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int matriz[50][50];
	int i,j;
	int filas, columnas;
	printf("digite el numero de filas que tendra la matriz:");
	scanf("%i" ,&filas);
	printf("\ndigite el numero de columnas que tendra la matriz:");
	scanf("%i",&columnas);
	printf("\n\n");
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			printf("\ndigite un numero para matriz[%i][%i]:",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
		printf("\n\n");
	}
    	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%i ",matriz[i][j]);
	}}
	getch();
	return 0;
}
