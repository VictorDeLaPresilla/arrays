/*Hacer una matriz de tipo entera preguntándole al usuario el número 
de filas y el número de columnas, rellenar la matriz y luego mostrarla en pantalla*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int tabla[50][50];
	int filas, columnas, i,j;
	printf("introduzca el numero de filas:");
	scanf("%i", &filas);
	printf("\nintroduzca el numero de columnas:");
	scanf("%i", &columnas);
	printf("\n\n");
		
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			printf("Digite tabla[%i][%i]: ",i+1,j+1);
			scanf("%i",&tabla[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			printf("%i ",tabla[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
/*for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++);
		{
			printf("introduzca el elmento [%i][%i]",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			printf("%i",matriz[i][j]);
		}
	}*/
