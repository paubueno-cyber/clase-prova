#include<stdio.h>
#include<string.h>

int main()
{
	int dia, mes, año, suma;
	printf("dime la fecha de tu nacimiento");

	printf("dia: ");
	scanf_s("%d", &dia);

	printf("mes: ");
	scanf_s("%d", &mes);

	printf("año: ");
	scanf_s("%d", &año);

	suma = dia + mes + año;

	printf("%d", suma);

}