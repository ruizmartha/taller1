#include<stdio.h>
#define NSECRET 23

void main(){

	  int num=0,i=0,contador=0;
	  int numintro[100];

		do{
		
	
		printf("adivina numero del 1 al 100: \t");
		scanf("%d",&num);
		printf("\n");
		
		numintro[i]=num;
		
		if(num<NSECRET)
		
         printf("el numero que ingreso es menor al secreto ");
         
           else{
           		if(num>NSECRET)
         printf("el numero que ingreso es mayor al secreto ");
		   }
		if (num!=NSECRET)
		{
			printf("no es el numero :C \n");
    	printf("\n");
    	
    		contador=contador+1;
			numintro[i]=num;
			i++;
    }
    	}while(num!=NSECRET);
	printf("El numero es correcto \n");
    
    	if(contador<5){
    		
		printf("MUY BIEN \n");
		printf("numeros erroneos: \n");
		
			for(i=0;i<contador;i++){
				printf("%d \n",numintro[i]);
	}
}else if(contador>4 && contador<11){
		printf("NO ESTA MAL \n");
		printf("numeros erroneos: \n");
		
			for(i=0;i<contador;i++){
				printf("%d \n",numintro[i]);
	}
}else if(contador>10){
	
		printf("DEBE PRACTICAR MAS!!\n");
		printf("numeros erroneos: \n");
			
			for(i=0;i<contador;i++){
				
				printf("%d \n",numintro[i]);
	}
}
else
{
	printf("correcto felicidades");
}
}


