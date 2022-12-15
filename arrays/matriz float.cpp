#include<conio.h>
#include<stdio.h>
int  main()
{
	float matriz[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("digite los elemntos de la mtriz[%i][%i]:\n",i+1,j+1);
		    scanf("%f", &matriz[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f",matriz[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
