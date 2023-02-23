#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the num, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int contador;
	int numero;
	int unidades;
	int decenas;

	for (contador = 0; contador <= 9; contador++)
	{
		for (numero = 0; numero <= 14; numero++)
		{
			if (numero > 9)
			{
				decenas = numero / 10;
				putchar(decenas + '0');
			}

			unidades = numero % 10;
			putchar(unidades + '0');
		}
		putchar('\n');
	}
}
