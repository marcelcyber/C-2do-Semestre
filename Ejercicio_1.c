#include <stdio.h>
#include <math.h>
int main(){

double Ox,Oy,Px,Py,Qx,Qy,da,db,dc,h1,a,b,c,x,As;  

printf("Ingrese el primer punto (x/y): ");
scanf("%lf %lf",&Ox,&Oy);
printf("Ingrese el segundo punto (x/y): ");
scanf("%lf %lf",&Px,&Py);
printf("Ingrese el tercer punto (x/y): ");
scanf("%lf %lf",&Qx,&Qy);

da = sqrt(pow(Ox-Px,2)+pow(Oy-Py,2));
db = sqrt(pow(Ox-Qx,2)+pow(Oy-Qy,2));
dc = sqrt(pow(Qx-Px,2)+pow(Qy-Py,2));

    //double aux = db + dc;
    //double aux1 = da + dc;
    //double aux2 = da + db;
    //printf("aux:%lf aux1:%lf, aux2:%lf",aux,aux1,aux2);

if (da<(db+dc) || db<(da+dc) || dc<(da+db)){

    if (pow(da,2)==(pow(db,2)+pow(dc,2))){
        printf("Es un triangulo rectangulo donde da es la hipotenusa\n");
        c = da;
        if(db>=dc){
            b = db;  
            a = dc;  
        }else{
            b = dc;
            a = db;    
        }
    }else if(pow(db,2)==(pow(da,2)+pow(dc,2))){
        printf("Es un triangulo rectangulo donde db es la hipotenusa\n");
        c = db;
        if(da>=dc){
            b = da;
            a = dc;
        }else{
            b = dc;
            a = da;
        }
    }else if(pow(dc,2)==(pow(da,2)+pow(db,2))){
        printf("Es un triangulo rectangulo donde dc es la hipotenusa\n");
        c = dc;
        if(da>=db){
            b = da;       
            a = db;
        }else{
            b = db;
            a = db;
        }
    }else{
        printf("Es un triangulo pero no es rectangulo\n");
    }     
}else{
    printf("No es un triangulo\n");  
}

h1 = a*b/c;
x = sqrt(pow(a,2)-pow(h1,2));
As = h1*x/2;  
printf("El Area del triangulo es: %.2lf",As);

return 0;
}