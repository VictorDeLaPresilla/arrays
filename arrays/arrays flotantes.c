#include<stdio.h>
#include<conio.h>
int main()
{
	float  a[5];
	int i;
	for (i=0;i<5;i++)
	{
		printf("digite un numero:\n",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		printf("%.2f\n", a[i]);
	}
	getch();
	return 0;
}
