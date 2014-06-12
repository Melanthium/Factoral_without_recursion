#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main()
{
	int N, a, i;

	setlocale(LC_ALL,"Russian");

	printf("Вычисление факториала без рекурсии.\n");
	printf("Введите число: ");
	scanf("%d", &N);

	// Запцскаем цикл в котором будут перебираться все значения с 0 до N
	for (i=0; i <= N; i++){
		if (i == 0) // Если у нас значение i равно 0 то переменной а присваиваем 1
			a = 1;
		else // иначе значние а умножаем на i
			a *= i;
	}
	printf ("%d ", a);

	_getch();
}
