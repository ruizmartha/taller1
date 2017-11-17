#include <stdio.h>

int a=0,c=0,b=0;
char str[9];
int sec=5 ;
void main()
{
 for(b=0;b<=9;b++)
 {
  printf("Adivinar numero \n")  ;
  printf("Introduzca un numero:\n");
  scanf("%d",&str[b]);
  if(sec==str[b])
  {
   if(b<5)
   {
      printf("Muy bien\n") ;
      b=11;
      getchar();
   }
   if(b>5&&b<9)
   {
      printf("Muy bien\n");
      b=11;
      getchar();
   }
   if(b==9)
   {
       printf("Mostrar numero que se utilizaron para llegar al numero secreto");
       for(c=0;c<=9;c++)
       {
	printf("%d \n ",str[c]);
       }
      b=11;
       getchar();
   }
  }
 }
	printf("Mostrar numero que se utilizaron para llegar al numero secreto");
       for(c=0;c<=9;c++)
       {
	printf("%d \n ",str[c]);
       }
 getchar();
}