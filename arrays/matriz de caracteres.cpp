/*matriz de cartacteres*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char matriz[2][3]={{'a','b','c'},{'d','e','f'}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c", matriz[i][j]]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
