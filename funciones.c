#include <stdio.h>
#include "funciones.h"
#include <string.h>



void verPersonas(char personas[][4][20]) {
    printf("Personas en el registro civil:\n");
    for(int i = 0; i < 10; i++) {
        printf("%s %s - Cedula: %s - Estado civil: ", personas[i][0], personas[i][1], personas[i][2]);
        if(strcmp(personas[i][3], "soltero") != 0) {
         
            int parejaIndex = -1;
            for(int j = 0; j < 10; j++) {
                if(strcmp(personas[j][2], personas[i][3]) == 0) {
                    parejaIndex = j;
                    break;
                }
            }
            if(parejaIndex != -1) {
                printf("casado con %s %s\n", personas[parejaIndex][0], personas[parejaIndex][1]);
            } else {
                printf("%s\n", personas[i][3]);
            }
        } else {
            printf("%s\n", personas[i][3]);
        }
    }
}


void registrarMatrimonio(char personas[][4][20]) {
    char cedula1[20], cedula2[20];
    int indice1 = -1, indice2 = -1;

    printf("Ingrese la cedula de la primera persona: ");
    scanf("%s", cedula1);
    printf("Ingrese la cedula de la segunda persona: ");
    scanf("%s", cedula2);

  
    for(int i = 0; i < 10; i++) {
        if(strcmp(personas[i][2], cedula1) == 0) {
            indice1 = i;
            break;
        }
    }


    for(int i = 0; i < 10; i++) {
        if(strcmp(personas[i][2], cedula2) == 0) {
            indice2 = i;
            break;
        }
    }

    if(indice1 != -1 && indice2 != -1) {
        strcpy(personas[indice1][3], cedula2);
        strcpy(personas[indice2][3], cedula1);
        printf("Matrimonio registrado correctamente.\n");

       
        strcpy(personas[indice1][3], "casado");
        strcpy(personas[indice2][3], "casado");
    } else {
        printf("Una o ambas personas no se encuentran en el registro.\n");
    }
}


void verificarPersona(char personas[][4][20]) {
    char cedula[20];
    int indice = -1;

    printf("Ingrese la cedula de la persona a verificar: ");
    scanf("%s", cedula);

    
    for(int i = 0; i < 10; i++) {
        if(strcmp(personas[i][2], cedula) == 0) {
            indice = i;
            break;
        }
    }

    if(indice != -1) {
        printf("Persona encontrada:\n");
        printf("%s %s - Cedula: %s - Estado civil: ", personas[indice][0], personas[indice][1], personas[indice][2]);
        if(strcmp(personas[indice][3], "soltero") != 0) {
            
            int parejaIndex = -1;
            for(int j = 0; j < 10; j++) {
                if(strcmp(personas[j][2], personas[indice][3]) == 0) {
                    parejaIndex = j;
                    break;
                }
            }
            if(parejaIndex != -1) {
                printf("casado con %s %s\n", personas[parejaIndex][0], personas[parejaIndex][1]);
            } else {
                printf("%s\n", personas[indice][3]);
            }
        } else {
            printf("%s\n", personas[indice][3]);
        }
    } else {
        printf("Persona no encontrada en el registro.\n");
    }
}

