/*Ejercicio 5: Realice un programa que lea en un array el sexo de los N estudiantes del curso de Algoritmos
 y que determine cuantos hombres y cuantas mujeres
 se encuentran en el grupo, suponiendo que los datos son extraídos alumno por alumno. */
#include<stdio.h>
#include<conio.h>
int main()
{
	int estudiantes[44], i, mujer, varon;
	printf("digite el numero de estudiantes \n");
	scanf("%i",&estudiantes);
	for(i=1;i<estudiantes;i++)
	{
		fflush(stdin);
		printf("%i.digite el sexo del alumno:", i);
		gets(estudiantes);
		if(strcmp(estudiantes,"masculino")==0)
		{
			varon++;
		}
		else(strcmp(estudiantes,"femenino")==0);
		{
			mujer++;
		}
		
	}
	printf("\n el numero de hombres es:%i", varon);
	printf("\n el numero de mujeres es:%i", mujer);
	getch();
	return 0;
}
