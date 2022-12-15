/*Ejercicio 5: Realice un programa que lea en un array el sexo de los N estudiantes
 del curso de Algoritmos y que determine cuantos hombres y cuantas mujeres se encuentran
  en el grupo, suponiendo que los datos son extraídos alumno por alumno. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char alumnos[44];
	int i, n, varon=0, mujer=0;
	printf("ingrese el numero de alumnos del respectivo curso\n");
	scanf("%i", &n);
	for(i=1;i<=n;i++)
	{
		fflush(stdin);
		printf("%i.¿sexo del alumn@?\n", i);
		gets(alumnos);
		if(strcmp(alumnos,"masculino")==0)
		{
			varon++;
		}
		else if(strcmp(alumnos,"femenino")==0)
		{
			mujer++;
		}
	}
	printf("\n numero de hombres:%i", varon);
	printf("\nnumero de mujeres:%i", mujer);
	getch();
	return 0;
}
