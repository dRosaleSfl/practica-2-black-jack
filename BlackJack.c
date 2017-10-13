#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// J Q R = 10
// A = 1 o 11
/* 
	NUMEROS RANDOM
		srand(time(NULL));
		int valor = min + rand() / (rand_max / (max-min+1) + 1)
		int valor = 1 + rand() / (rand_11/(11-1+1)+1)
		Los "/" son divisiones
*/
int main ()
	{
		int min = 1;
		int max = 51;
		int test = 0;
		srand(time(NULL));
		test = rand();
		int valor = min + rand() / (RAND_MAX/(max-min+1)+1);
		printf ("%d\n%d\n\n\n", valor, test);
		int deck [51];
		int resp;
		int contricante = 0;
		for (int llenado = 0; llenado <= 51; llenado ++)
			{
				if (llenado < 4)
					{
						deck [llenado] = 1;
					}
				if (llenado < 8 && llenado > 3)
					{
						deck [llenado] = 2;
					}
				if (llenado < 12 && llenado > 7)
					{
						deck [llenado] = 3;
					}
				if (llenado < 16 && llenado > 11)
					{
						deck [llenado] = 4;
					}
				if (llenado < 20 && llenado > 15)
					{
						deck [llenado] = 5;
					}
				if (llenado < 24 && llenado > 19)
					{
						deck [llenado] = 6;
					}
				if (llenado < 28 && llenado > 23)
					{
						deck [llenado] = 7;
					}
				if (llenado < 32 && llenado > 27)
					{
						deck [llenado] = 8;
					}
				if (llenado < 36 && llenado > 31)
					{
						deck [llenado] = 9;
					}
				if (llenado < 52 && llenado > 35)
					{
						deck [llenado] = 10;
					}
				printf ("%d\n", deck [llenado]);
			}
		printf ("		.:Black Jack (21):.		");
		/*
		do
			{
				printf ("Quieres otra carta? \n1 - Si \n2- no");
				scanf ("%i", resp);
				switch (resp)
					{
						case 1:
							// Se genera otra cantidad aleatoria y se suma al valor
						break;
						
						case 2:
							// Nada
						break;
						
						default:
							// Escribe un numero valido
						break;
					}
			}
			*/
		if (valor == 21)
			{
				printf ("¡¡¡GANASTE!!!");
			}
		if (valor < 21)
			{
				if (valor > contricante)
					{
						printf ("¡¡¡GANASTE!!!");
					}
			}
		if (valor > 21)
			{
				printf ("Oh... te pasaste de 21... lo siento pero perdiste");
			}
			
	}
