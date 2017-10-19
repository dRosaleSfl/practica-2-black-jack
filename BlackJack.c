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
		int max = 48;
		int test = 0;
		srand(time(NULL));
		int valor = min + rand() / (RAND_MAX / (max-min+1)+1);
		int valor2 = min + rand() / (RAND_MAX / (max-min+1)+1);
		int band = 1;
	//	printf ("%d \n", valor); 
		int deck [48];
		int resp;
		char cartaC = ' ';
		int contricante = 0;
		int valorAS = 0;
		int acumulado = 0;
		int cartan = 0;
		for (int llenado = 0; llenado <= 47; llenado ++)
			{
				if (llenado < 4)
					{
						deck [llenado] = 1;
					}
				if (llenado < 8 && llenado > 4)
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
				if (llenado < 40 && llenado > 35)
					{
						deck [llenado] = 10;
					}
				if (llenado < 44 && llenado > 39)
					{
						deck [llenado] = 11;
					}
				if (llenado <= 48 && llenado > 43)
					{
						deck [llenado] = 12;
					}
	//			printf ("%d\n", deck [llenado]);
			}
		int carta1 = deck [valor];
		int carta2 = deck [valor2];
		deck [valor] = 0;
		deck [valor2] = 0;		
	//	printf ("\n Test 1: %d\ny Test 2: %d \n", valor, valor2);
		
	//	printf ("\n%d", carta1);
		printf ("		.:Black Jack (21):.		");
		if (carta1 >= 10 or carta1 < 2)
			{
				switch (carta1)
					{
						case 10:
							cartaC = 'J';
							carta1 = 10;
						break;
						case 11:
							cartaC = 'Q';
							carta1 = 10;
						break;
						case 12:
							cartaC = 'K';
							carta1 = 10;
						break;
						case 1:
							cartaC = 'A';
							do
								{
									printf ("\nTienes un As, Que valor quieres? 1 o 11\n");
									scanf ("%i", &valorAS);
								}while (valorAS != 1 && valorAS != 11);
							carta1 = valorAS;
							break;
					}
				printf ("\nTienes una %c su valor es %d", cartaC, carta1);
				acumulado = acumulado + carta1;
			}
		else
			{
				printf ("\nTienes una carta con valor %d", carta1);
				acumulado = acumulado + carta1;
			}
			
		if (carta2 >= 10 or carta2 < 2)
			{
				switch (carta2)
					{
						case 10:
							cartaC = 'J';
							carta2 = 10;
						break;
						case 11:
							cartaC = 'Q';
							carta2 = 10;
						break;
						case 12:
							cartaC = 'K';
							carta2 = 10;
						break;
						case 1:
							cartaC = 'A';
							do
								{
									printf ("\nTienes un As, Que valor quieres? 1 o 11\n");
									scanf ("%i", &valorAS);
								}while (valorAS != 1 && valorAS != 11);
							carta2 = valorAS;
							break;
					}
				printf ("\nTienes una %c su valor es %d", cartaC, carta2);
				acumulado = acumulado + carta2;
			}
		else
			{
				printf ("\nTienes una carta con valor %d", carta2);
				acumulado = acumulado + carta2;
			}
			
		printf ("\nHasta ahora llevas %d", acumulado);
		
		

		do
			{
				fflush(stdin);
				valor = 0;
				printf ("\nQuieres otra carta? \n1 - Si \n2- no\n");
				scanf ("%i", &resp);
				switch (resp)
					{
						case 1:
							// Se genera otra cantidad aleatoria y se suma al valor
							valor = min + rand() / (RAND_MAX / (max-min+1)+1);
							cartan = deck [valor];
							if (cartan != 0)
								{
									if (cartan >= 10 or cartan < 2)
										{
											switch (cartan)
												{
													case 10:
														cartaC = 'J';
														cartan = 10;
													break;
													case 11:
														cartaC = 'Q';
														cartan = 10;
													break;
													case 12:
														cartaC = 'K';
														cartan = 10;
													break;
													case 1:
														cartaC = 'A';
														do
															{
																printf ("\nTienes un As, Que valor quieres? 1 o 11\n");
																scanf ("%i", &valorAS);
															}while (valorAS != 1 && valorAS != 11);
															carta1 = valorAS;
													break;
												}
											printf ("\nTienes una %c su valor es %d", cartaC, cartan);
											acumulado = acumulado + cartan;
										}	
							else
										{
											printf ("\nTienes una carta con valor %d", cartan);
											acumulado = acumulado + cartan;
										}
									}
							valor = 0;
							printf ("\nHasta ahora llevas %d", acumulado);
						break;
						
						case 2:
							// Nada
							printf ("\nOk! Entonses nos quedamos con %d\n", acumulado);
							band = 0;
							
						break;
						
						default:
							// Escribe un numero valido
							printf ("\nOPor Favor Escriba una cantidad valida\n");
						break;
					}
			} while (band == 1);
			
		/*
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
		*/
			
	}
