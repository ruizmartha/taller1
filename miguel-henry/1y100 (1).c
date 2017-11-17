//escribir un programa en c paara adivinar un numero, entre 1 y 100, que previamente a definido como una constante.
//el programa ira pidiendo numeros al usuario, estos numeros se guardaran en un arreglo, y siempre que dicho numero,
//no coinsida con el numero secreto le indicara, si el numero introducido es mayor o menor que el numero secreto que tiene que adivinar.
//al final el programa le mostrara al usuario si el numero de intentos es menor que 5, mostrara un mensaje que dice, muy bien,
//si el valor esta entre 5 y 10 mostrara el mensaje, no esta mal, si el numero de intentos es mayor que 10 , se mostrara el mensaje, debe practicar,
//ademas de estos mensajes mostrara los numeros que introdujo previamente para llegar al numero secreto.

#include<stdio.h>
#define NUMERO 56
void main()
{
	int c,i,n[100],j[100],x;
	
	
	while(n[i]!=NUMERO)
	{
	    printf("Ingrese el nuemro\n");
	    scanf("%d",&n[i]);
	    
	    if(n[i]>NUMERO)
	    {
	    	printf("El numero es menor al numero secreto\n");
		}else 
		if(n[i]<NUMERO)
		{
			printf("El numero es mayor al numero secreto\n");
		}
		x++;
		
		j[i]=n[i];
    	printf("Los numeros son:%d\n",j[i]);
   }
  
	if(x==1||x==2||x==3||x==4)
	{
		printf("Muy bien\n");
	}else{if(x==5||x==6||x==7||x==8||x==9)
	{
		printf("No esta mal\n");
	}else{ if(x>=10)
	{
		printf("Debe practicar\n");
	}
	}
	}
	printf("Intentos %d\n",x-1);
	
}
