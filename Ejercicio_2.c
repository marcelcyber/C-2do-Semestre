#include <stdio.h>
int main(){
   int d;
   float plata,gal,km,tkm,p,c;
   plata = 0;
   gal = 0;
   tkm = 0;
   p = 3.2;
   c = 0.5;

printf ("Ingrese cuantos dias a la semana salio el vehiculo: ");
scanf("%d", &d);

if (d >= 1 && d <= 7){

   for (int dia = 1; dia <= d; dia++) {
      printf("Ingrese los km recorridos en el dia %d: ",dia);
      scanf("%f",&km);
      tkm +=km;
   }
   gal = tkm * c;
   plata = gal * p;

   printf("El consumo de galones a la semana es: %.2f\n",gal);
   printf("El precio semanal es de: %.2f\n",plata);
}
else{
   printf("Error, valor de dias incorrecto"); 
}
return 0;
}
