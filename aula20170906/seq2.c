#include <stdio.h>

  int main()
   {
      float base, area, altura;
     printf("Entre a base: ");
     scanf("%f",&base);
    printf("Entre a altura: ");
    scanf("%f",&altura);
      area=((base * altura) / 2);
      printf("A area do paralelogramo e: %f \n", area);

     return 0;
 }