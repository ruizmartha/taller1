#include<stdio.h>
#define ADV 26
void main()
{
	int a[100],n,j,i=0,cont=0;
	do{ 
		printf("Introduzca el numero a adivinar \n");
		scanf("%d",&n);
	
		if(n>ADV)
			printf("El numero %d es mayor a el numero que esta adivinando \n",n);
			
		else if(n<ADV)
		    printf("El numero %d es menor a el numero que esta adivinando \n",n);
		
		}
		while(n!=ADV);
		printf("¡En horabuena!,el numero adivinado es %d \n",n);



	if(cont<5){
		printf("Muy bien \n");
		printf("Numeros errados: \n");
			for(i=0;i<cont;i++){
				printf("%d \n",a[i]);
	}
}
else if(cont>=5 && cont<=10){
		printf("No esta mal \n");
		printf("Numeros errados: \n");
			for(i=0;i<=cont;i++){
				printf("%d \n",a[i]);
	}
}
else if(cont<10){
		printf("Debe practicar \n"); 
		printf("Numeros errados: \n");
			for(i=0;i>cont;i++){
				printf("%d \n",a[i]);
	}
}
		}
		
	
	
