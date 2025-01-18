//Lab2

/* Zad1
#include <stdio.h>

int main()
{
	int liczba, suma = 0, maksymalna = 0;
	int i = 0;

	do {
		printf("Podaj liczbe: ");
		scanf_s("%d", &liczba);

		if (liczba > 0) {
			suma += liczba;

			if (liczba > maksymalna) {
				maksymalna = liczba;
			}
			i++;
		}

	} while (liczba > 0);

	if (i > 0) {
		int srednia = suma / i;
		printf("Suma to: %d\n", suma);
		printf("Srednia to: %d\n", srednia);
		printf("Maksymalna to: %d\n", maksymalna);
	}
	else
	{
		printf("Nie podano zadnej liczby \n");
	}

	return 0;
}
*/


/*Zad2
#include <stdio.h>

int main() {

	int liczby, dodatnie = 0, ujemne = 0, ilosc, suma = 0;
	int i = 0;

	do {
		
		printf("Podaj liczbe: ");
		scanf_s("%d", &liczby);
		
		if (i < 10) {
			
			if (liczby <0) {
				ujemne++;
			}
			else
			{
				dodatnie++;
			}
			suma += liczby;
			i++;
		}
	} while (i < 10);

	if(i == 10){
		printf("Suma to: %d ", suma); 
		printf("Ilosc ujemnych to: %d ", ujemne);
		printf("Ilosc dodatnich to: %d ", dodatnie);
	}
	
	return 0;
}
*/

/* Zad3
#include <stdio.h>

int main()
{
	int liczba = 0, n = 0, suma = 0;

	do {
		printf("Podaj pierwsza liczbe: ");
		scanf_s("%d", &liczba);

		if (liczba % 2 == 0) {
			suma += liczba;
		}

		n++;

	} while (n < 10);

	printf("Suma wszystkich liczb z przedzialu to: %d", suma);


	return 0;

}

*/

/*Zad4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {

	int liczba = 0, n = 0, suma = 0;

	srand(time(NULL));

	printf("Podaj ilosc liczb ktore chcesz wylosowac: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		liczba = rand() % 56 -10;
		printf("Wylosowana liczba %d\n", liczba);

		if (liczba % 2 == 0) {
			suma += liczba;
		}
		
	}
		
	printf("Suma wszystkich liczb parzystych z przedzialu to: %d", suma);



	return 0;
}
*/


/* Zad5
#include <stdio.h>


int main() {

	int n = 0, lp = 0, suma = 0, srednia = 0, ilosc = 0;
	

	printf("Podaj ilosc studentow: ");
	scanf_s("%d", &n);


	while (ilosc < 1) {
		
		for (int i = 1; i <= n; i++) {
			printf("Podaj ilosc punktow dla %d ucznia: ", i);
			scanf_s("%d", &lp);

			suma += lp;
		}
		
		
		srednia = suma / n;
		ilosc++;

		
	}
	
	
	if (ilosc = 1) {
		printf("Srednia liczba puntkow dla grupy to: %d", srednia);
	}

	return 0;
}
*/

/*Zad6
#include <stdio.h>

int main() {

	for (int i = 1; i<=100; i++) {
		printf("\n%d\n", i);
	}

	for (int a = 100; a >= 0; a--) {
		printf("\n%d\n", a);
	}

	for (int b = 7; b <= 77; b += 7) {
		printf("\n%d\n", b);
	}

	for (int c = 20; c >= 0; c -= 2) {
		printf("\n%d\n", c);
	}

	return 0;
}
*/


/*Zad7
#include <stdio.h>

int main() {

	int i, j;

	for (i = 10; i > 0; i--) {
		for (j = 0; j < i; j++)
			printf("X");
		printf("\n");
	}


	
	for (i = 10; i > 0; i--) {
		for (j = 0; j < 10 - i; j++) 
			printf(" "); 
		for (j = 0; j < i; j++) 
			printf("X"); 
		printf("\n");
	}

	


		

		for (i = 0; i < 10; i++) {
			for (j = 0; j < 10 - i - 1; j++)
				printf(" ");
			for (j = 0; j <= i; j++)
				printf("X ");
			printf("\n");
		}

	


	return 0;
}
*/