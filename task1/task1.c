#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Моя программа");

	puts("Hello, world!");

	puts("Нажмите Enter для продолженя...");
	getchar();
	puts("Продолжение программы");

	return 0;
}