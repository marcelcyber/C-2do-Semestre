#include <stdio.h>
#include <math.h>

// Función para calcular la distancia entre dos puntos en el plano cartesiano
float distancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Función para calcular el área de la base de la pirámide (triángulo)
float areaBase(float x1, float y1, float x2, float y2, float x3, float y3) {
    float lado1, lado2, lado3, s;

    lado1 = distancia(x1, y1, x2, y2);
    lado2 = distancia(x2, y2, x3, y3);
    lado3 = distancia(x3, y3, x1, y1);

    s = (lado1 + lado2 + lado3) / 2;

    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
}

// Función principal
int main() {
    float x1, y1, x2, y2, x3, y3;
    float altura, area;

    // Pedir coordenadas de los vértices del triángulo base
    printf("Introduce las coordenadas (x, y) del primer vértice: ");
    scanf("%f %f", &x1, &y1);
    printf("Introduce las coordenadas (x, y) del segundo vértice: ");
    scanf("%f %f", &x2, &y2);
    printf("Introduce las coordenadas (x, y) del tercer vértice: ");
    scanf("%f %f", &x3, &y3);

    // Pedir altura de la pirámide
    printf("Introduce la altura de la pirámide: ");
    scanf("%f", &altura);

    // Calcular área de la base
    area = areaBase(x1, y1, x2, y2, x3, y3);

    // Calcular área total de la pirámide
    area += 0.5 * distancia(x1, y1, x2, y2) * altura;

    // Mostrar el resultado
    printf("El área de la pirámide es: %f\n", area);

    return 0;
}