#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "fecha.h"
#include "marca.h"
#include "color.h"
#include "auto.h"
#include "servicio.h"
#include "trabajo.h"
#include "menuDeOpciones.h"

int menuOpciones()
{
    int opcion;

    system("cls");
    printf("------------------------------------------\n");
    printf("        ***Menu de Opciones***      \n\n");
    printf("------------------------------------------\n");
    printf("1-Alta Auto \n");
    printf("2-Modificar Auto \n");
    printf("3-Baja Auto \n");
    printf("4-Listar Autos \n");
    printf("5-Listar Marcas \n");
    printf("6-Listar Colores \n");
    printf("7-Listar Servicios \n");
    printf("8-Alta trabajo \n");
    printf("9-Listar trabajos \n");
    printf("10-Salir \n");


    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}



int menuModificacion()
{
    int opcion;

    printf("   1-Modificar Color\n");
    printf("   2-Modificar Modelo\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

