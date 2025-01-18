//Lab1


/*Zad1
#include <stdio.h>

int main() {
	int nralbumu = 134923;
	printf("Twoj numer albumu to: %d\n", nralbumu);

	return 0;
	
}
*/

/* Zad2
#include <stdio.h>

int main() {
	int a;
	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &a);
	if (a%2==0) {
		printf("Podana liczba jest parzysta");
	}
	else
	{
		printf("Podana liczba jest nie parzysta");
	}


	return 0;
}

*/


/*
#include <stdio.h>

int main() {
	float a, b;
	printf("Podaj pierwsza liczbe zmienno przecinkowa: ");
	scanf_s("%f", &a);
	printf("Podaj druga liczbe zmienno przecinkowa: ");
	scanf_s("%f", &b);

	if (a<b) {
		printf("Pierwsza liczba jest mniejsza od drugiej \n");
		}
	else if (a>b)
	{
		printf("Pierwsza liczba jest wieksza od drugiej \n");
	}

	else
	{
		printf("Liczby sa sobie rowne");
	}
	
		return 0;
}
*/

/*
#include <stdio.h>

int main() {
	float a, b, c, d, wynik, suma;


	printf("Podaj pierwsza liczbe zmiennoprzecinkowa: ");
	scanf_s("%f", &a);

	printf("Podaj druga liczbe zmiennoprzecinkowa: ");
	scanf_s("%f", &b);

	printf("Podaj trzecia liczbe zmiennoprzecinkowa: ");
	scanf_s("%f", &c);

	printf("Podaj czwarta liczbe zmiennoprzecinkowa: ");
	scanf_s("%f", &d);

	suma = a + b + c + d;

	wynik = suma / 4;

	printf("Srednia arytmetyczna to: %f", wynik);

}
*/

/*
#include <stdio.h>

int main()
{
	int a, b;
	char znak;

	printf("Podaj pierwsza liczbe: ");
	scanf_s("%d", &a);

	printf("Wybierz znak dzialania: "); 
	scanf_s(" %c", &znak,1);

	printf("Podaj druga liczbe: ");
	scanf_s("%d", &b);


	switch (znak) {

		case '+':
		printf("Wynik %d \n", a + b);
		break;

		case '-':
		printf("Wynik %d \n", a - b);
		break;

		case '*':
		printf("Wynik %d \n", a * b);
		break;

		case '/':
		if (b != 0)
			printf("Wynik %d\n", a / b);
		else
			printf("Nie mozna dzielic przez zero \n");
		break;
		
		default:
			printf("Niewlasciwy znak dzialania \n");
			break;
	}

	return 0;
}
*/