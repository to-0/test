// cviko5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// uloha6-4.c -- Tomáš Kalný, 28.10.2019 18:27

#include <stdio.h>
int main()
{
	FILE *f1, *f2, *f3;
	char c1, c2;
	int p, k1, k2;
	f1 = fopen("prvy.txt", "r");
	f2 = fopen("druhy.txt", "r");
	f3 = fopen("treti.txt", "w");
	putc('+', f3);
	c1 = getc(f1);
	c2 = getc(f2);
	k1 = 1;
	k2 = 1;
	p = 1;
	while ((c1 != EOF) || (c2 != EOF)) {
		if (c1 == EOF) k1 = 0;
		if (c2 == EOF) k2 = 0;
		if ((c1 != EOF) && (p % 2)) { //neparne slovo
			if ((c1 == ' ') || (c1 == '\n')) {
				fprintf(f3, " -");
				printf(" -");
				if (k2) p++;
			}
			else {
				putc(c1, f3);
				putchar(c1);
			}
		}
		if ((c2 != EOF) && (p % 2 == 0)) {
			if ((c2 == ' ') || (c2 == '\n')) {
				fprintf(f3, " +");
				if (k1) p++;
			}
			else {
				fprintf(f3, "%c", c2);
				printf("%c", c2);
			}
		}
		c1 = getc(f1);
		c2 = getc(f2);

	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}

void ten() {
	FILE* f;
	int i, min, c, r;
	fopen_s(&f,"list.txt", "r");
	r = 0;
	min = 0;
	i = 0;
	while ((c = getc(f)) != EOF) {
		if (c == '\n') {
			putchar('\n');
			if (r == 0) { //ak som na prvom riadku
				min = i;
				r++;
			}
			if (min > i) {
				min = i;
			}
			i = 0;
		}
		else {
			i++;
		}
	}
	printf("%d", min);

}
void five() {
	int n, i, j=0;
	scanf_s("%d", &n);
	if (((n >= 1) && (n <= 15)) && ((n % 2))) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if ((i == j) || (j == (n - 1 - i)) || (i == ((n / 2))) || (j == ((n / 2)))) {
					putchar('*');
				}
				else putchar('-');
			}
			putchar('\n');

		}
	}
	else printf("Zly vstup");
	}
void three() {
	int n, i, j;
	scanf_s("%d", &n);
	if ((n >= 1) && (n <= 15)) {
		for (i = 0; i < n; i++) {
			printf("%d:", (i + 1));
			for (j = n - i; j > 0; j--) {
				printf("%d ", j);
			}
			putchar('\n');
		}

	}
	else printf("Cislo nie je z daneho intervalu");
}

void one() {
	int n, i, j, x=0;
	scanf_s("%d", &n);
	x = 1;
	if ((n >= 1) && (n <= 10)) {
		for (i = 1; i <= n; i++) {
			for (j = 0; j < i; j++) {
				printf("%d", x);
				x++;
				putchar(' ');
			}
			putchar('\n');
		}
	}
	else printf("Nespravny vstup");
}
/*int main()
{
	ten();
	return 0;
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
