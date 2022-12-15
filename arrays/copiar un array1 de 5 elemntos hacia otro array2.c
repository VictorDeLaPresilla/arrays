/* copiar un array1 de 5 elemntos hacia otro array2 */
#include<conio.h>
#include<stdio.h>
void copiando(int a[],int b[], int tamanio);

int main()
{
	int array1[5], array2[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("introduzca el  numero\n");
		scanf("%i",&array1[i]);
	}
	printf("copiando arreglo\n");
	copiando(array1,array2,5);
	getch();
	return 0;
}
//a[]=array1
//b[]=array2
void copiando(int a[],int b[], int tamanio)
{
	int i;
	for(i=0;i<tamanio;i++)
	{
		b[i]=a[i];//array2=array1
	}
	for(i=0;i<tamanio;i++)
	{
		printf("%i",b[i]);//array2
	}
}
