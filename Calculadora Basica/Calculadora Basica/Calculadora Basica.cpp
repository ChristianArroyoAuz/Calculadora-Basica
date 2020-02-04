#include<iostream>
#include<stdio.h>
#include<conio.h>

int main(int argc, char* argv[])
{
	int iOpcion = 0;
	
	do
	{
		printf_s("Programa de una calculadora.\n\n\n");
		printf_s("Escoja una opcion:\n\n\n");
		printf_s("1.- Sumar dos numeros.\n\n\n");
		printf_s("2.- Restar dos numero.\n\n\n");
		printf_s("3.- Multiplicar dos numeros.\n\n\n");
		printf_s("4.- Dividir dos numeros.\n\n\n");
		printf_s("5.- Potencia dos numeros.\n\n\n");
		printf_s("6.- Raiz Cuadrada.\n\n\n");
		printf_s("7.- Factorial.\n\n\n");
		printf_s("8.- Salir.\n\n\n");
		printf_s("Ingrese el numero de la opcion: ");
		scanf_s("%d", &iOpcion);

		switch (iOpcion)
		{
			case 1:
			{
				float x, y, a;
				printf_s("\n\nIngrese el primer numero: ");
				scanf_s("%f", &x);
				printf_s("\n\nIngrese el segundo numero: ");
				scanf_s("%f", &y);
				a = x + y;
				printf_s("\n\nLa suma de los dos numeros es:  ""%.2f\n\n\n", a);
				break;
			}

			case 2:
			{
				float x, y, b;
				printf_s("\n\nIngrese el primer numero: ");
				scanf_s("%f", &x);
				printf_s("\n\nIngrese el segundo numero: ");
				scanf_s("%f", &y);
				b = x - y;
				printf_s("\n\nLa resta de los dos numeros es:  ""%.2f\n\n\n", b);
				break;
			}

			case 3:
			{
				float x, y, c;
				printf_s("\n\nIngrese el primer numero: ");
				scanf_s("%f", &x);
				printf_s("\n\nIngrese el segundo numero: ");
				scanf_s("%f", &y);
				c = x * y;
				printf_s("\n\nLa multiplicacion de los dos numeros es:  ""%.2f\n\n\n", c);
				break;
			}

			case 4:
			{
				float x, y, d;
				printf_s("\n\nIngrese el primer numero: ");
				scanf_s("%f", &x);
				printf_s("\n\nIngrese el segundo numero: ");
				scanf_s("%f", &y);
				d = x / y;
				printf_s("\n\nLa division del primer numero para el segundo numeros es:  ""%.2f\n\n\n", d);
				break;
			}

			case 5:
			{
				float x, y, e, f;
				printf_s("\n\nIngrese el numero base: ");
				scanf_s("%f", &x);
				printf_s("\n\nIngrese el exponente: ");
				scanf_s("%f", &y);
				e = 1;
				f = 0;
				while (f < y)
				{
					e *= x;
					f++;
				}
				printf_s("\n\nEl resultado de la potenciacion es: ""%.2f\n\n\n", e);
				break;
			}

			case 6:
			{
				//Proximamente
			}

			case 7:
			{
				//Proximamente
			}

			case 8:
			{
				printf_s("\n\nGracias.\n\n\n");
				break;
			}

			default:
			{
				printf_s("\n\nIngreso una opcion incorrecta.\n\n\n");
				break;
			}
		}
	}

	while (iOpcion != 8);
	printf_s("Presione una tecla para finalizar.\n\n\n");
	_getch();
	return 0;
}