#include <stdio.h>
#include <math.h>
double Operacion_1();
double Operacion_2();
double Operacion_3();
double Calculo_Area();

int main(){

double Ox,Oy,Px,Py,Qx,Qy,da,db,dc,h1,a,b,c,x,As;  

printf("Ingrese el primer punto (x/y): ");
scanf("%lf %lf",&Ox,&Oy);
printf("Ingrese el segundo punto (x/y): ");
scanf("%lf %lf",&Px,&Py);
printf("Ingrese el tercer punto (x/y): ");
scanf("%lf %lf",&Qx,&Qy);


if ((Operacion_1(da,Oy,Px, Py,Ox))<((Operacion_2 (db,Oy,Qx,Qy,Ox))+(Operacion_3(Px,Py,Qx,Qy,dc))) || Operacion_2 (db,Oy,Qx,Qy,Ox)<(Operacion_1(da,Oy,Px, Py,Ox)+Operacion_3(Px,Py,Qx,Qy,dc)) 
|| Operacion_3(Px,Py,Qx,Qy,dc)<(Operacion_1(da,Oy,Px, Py,Ox)+Operacion_2 (db,Oy,Qx,Qy,Ox))){

    if (pow(Operacion_1(da,Oy,Px, Py,Ox),2)==(pow(Operacion_2 (db,Oy,Qx,Qy,Ox),2)+pow(Operacion_3(Px,Py,Qx,Qy,dc),2))){
        printf("Es un triangulo rectangulo donde da es la hipotenusa\n");
        c = Operacion_1(da,Oy,Px, Py,Ox);
        if((Operacion_2 (db,Oy,Qx,Qy,Ox))>=dc){
            b = (Operacion_2 (db,Oy,Qx,Qy,Ox));  
            a = Operacion_3(Px,Py,Qx,Qy,dc);  
        }else{
            b = Operacion_3(Px,Py,Qx,Qy,dc);
            a = (Operacion_2 (db,Oy,Qx,Qy,Ox));    
        }
    }else if(pow(Operacion_2 (db,Oy,Qx,Qy,Ox),2)==(pow(Operacion_1(da,Oy,Px, Py,Ox),2)+pow(dc,2))){
        printf("Es un triangulo rectangulo donde db es la hipotenusa\n");
        c = (Operacion_2 (db,Oy,Qx,Qy,Ox));
        if(Operacion_1(da,Oy,Px, Py,Ox)>=dc){
            b = Operacion_1(da,Oy,Px, Py,Ox);
            a = Operacion_3(Px,Py,Qx,Qy,dc);
        }else{
            b = Operacion_3(Px,Py,Qx,Qy,dc);
            a = Operacion_1(da,Oy,Px, Py,Ox);
        }
    }else if(pow(Operacion_3(Px,Py,Qx,Qy,dc),2)==(pow(Operacion_1(da,Oy,Px, Py,Ox),2)+pow((Operacion_2 (db,Oy,Qx,Qy,Ox)),2))){
        printf("Es un triangulo rectangulo donde dc es la hipotenusa\n");
        c = Operacion_3(Px,Py,Qx,Qy,dc);
        if(da>=(Operacion_2 (db,Oy,Qx,Qy,Ox))){
            b = Operacion_1(da,Oy,Px, Py,Ox);       
            a = (Operacion_2 (db,Oy,Qx,Qy,Ox));
        }else{
            b = (Operacion_2 (db,Oy,Qx,Qy,Ox));
            a = (Operacion_2 (db,Oy,Qx,Qy,Ox));
        }
    }else{
        printf("Es un triangulo pero no es rectangulo\n");
    }     
}else{
    printf("No es un triangulo.\n");  
}
 
printf("El Area del triangulo es: %.2lf",Calculo_Area( As, h1,x,a,b,c));

return 0;
}
  


double Operacion_3 (double Px, double Py, double Qx, double Qy, double dc){
dc = sqrt(pow(Qx-Px,2)+pow(Qy-Py,2));
return dc;
}
double Operacion_2 (double db, double Oy,double Qx,double Qy,double Ox){
db = sqrt(pow(Ox-Qx,2)+pow(Oy-Qy,2));
return db;
}
double Operacion_1 (double da, double Oy,double Px,double Py,double Ox){
da = sqrt(pow(Ox-Px,2)+pow(Oy-Py,2));
return da;
}

double Calculo_Area(double As,double h1,double x,double a, double b, double c){
h1 = a*b/c; 
x = sqrt(pow(a,2)-pow(h1,2)); 
As = h1*x/2; 
return As;
}