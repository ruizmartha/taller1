#include <stdio.h>
#define PASS 23
void main () {
	int val[100], i=1, cont=0, num=0;
	printf("Adivine un numero del 1 al 100:\t");
	scanf("%d", &num);
	val[0]=num;
	if (num<PASS)
		{
			printf("PISTA! El numero secreto es mayor\n");
		}
		else if(num>PASS) 
		{
			printf("PISTA! El numero secreto es menor\n");
		}
	if (num!=PASS)
	{
    while (num!=PASS)	
	{	
		printf("Adivine un numero del 1 al 100:\t");
	    scanf("%d", &num);
		if (num<PASS)
		{
			printf("PISTA! El numero secreto es mayor\n");
		}
		else if(num>PASS)
		{
			printf("PISTA! El numero secreto es menor\n");
		}
		cont=cont+1;
		val[i]=num;
		i++;
    }
	if(num==PASS)
	{
		printf("\n\nLO CONSEGUISTE!\n");
    if(cont<5)
    {
    	printf("MUY BIEN! (menos de 5 intentos)\n");
    	printf("\nLos Numeros introducidos previamente son:\n");

    	for(i=0; i<cont; i++)
    	{
    		printf("%d\n", val[i]);
		}
	}
	else if(cont>4 && cont<11)
	{
		printf("NO ESTA MAL! (entre 5 a 10 intentos)");
    	printf("\nLos Numeros introducidos previamente son:\n");
    	for(i=0; i<cont; i++)
    	{
    		printf("%d\n", val[i]);
		}
	}
	else if(cont>10)
	{
		printf("DEBES PRACTICAR MAS (mas de 10 intentos)");
    	printf("\nLos Numeros introducidos previamente son:\n");
    	for(i=0; i<cont; i++)
    	{
    		printf("%d\n", val[i]);
		}
	}
    }
    }
    else
    {
    	printf("CORRECTO! Felicidades.");
	}
	

}
