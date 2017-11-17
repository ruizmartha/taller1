#include<stdio.h>
#define A 15
void main()
{
	int i,inte,v[100];
	for(i=0;i<10;i++)
	{
        printf("introduzca valor: \n");	
		scanf("%d",&v[i]);

	if(v[i]>A)
	{
		printf("El numero secreto es mas chico  \n");
		inte++;
	}
	if(v[i]<A)
	{
		printf("El numero secreto es mas grande  \n");
		inte++;
	}
     if(inte<=6) 
    {
    	printf("Muy Bien \n");
	}
	if((inte>6)&&(inte<=10))
	{
		printf("No Esta Mal \n");
	}
	if(inte==11)
	{
		printf("Debe Practicar  \n");
	}
   }
   for(i=0;i<10;i++)
   {
   	printf("%d \t",v[i]);
   	
   }
	
 }


   
	
	

