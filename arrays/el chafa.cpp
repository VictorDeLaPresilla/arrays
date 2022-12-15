//Almacenar 2 nombres en dos arrays e intercambiar contenidos

#include<stdio.h>
#include<string.h>

int main () {

char n1[20],n2[20],n3[20];

printf ("Digite el primer nombre: "); gets(n1);
printf ("Digite el segundo nombre: "); gets(n2);

strcpy(n3,n2);
strcpy(n2,n1);
strcpy(n1,n3);

printf("El primer es: %s",n1);
printf("\nEl segundo es: %s\n",n2);

return 0;
}
