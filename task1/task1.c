#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("��� ���������");

	puts("Hello, world!");

	puts("������� Enter ��� ����������...");
	getchar();
	puts("����������� ���������");

	return 0;
}