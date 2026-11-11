
#include <stdio.h>
#include <stdlib.h>
#include "simulador.h"

/* Lee una opcion entera y controla entradas incorrectas */
int leer_opcion(void)
{
    char linea[100];
    char *fin;
    long opcion;

    while (1) {
        printf("\nIngrese una opcion: ");

        if (fgets(linea, sizeof(linea), stdin) == NULL) {
            return 0;
        }

        opcion = strtol(linea, &fin, 10);

        while (*fin == ' ' || *fin == '\t' ||
               *fin == '\n' || *fin == '\r') {
            fin++;
        }

        if (fin != linea && *fin == '\0') {
            return (int)opcion;
        }

        printf("Entrada invalida. Ingrese un numero entero.\n");
    }
}

int main(void)
{
    Mision mision;
    Resultados resultados;
    int opcion;

    inicializar_mision(&mision);
    calcular_resultados(mision, &resultados);

    do {
        printf("\n====================================\n");
        printf("     SIMULADOR DE MISIONES ARTEMIS\n");
        printf("       INYECCION TRANSLUNAR TLI\n");
        printf("====================================\n");
        printf("1. Mostrar parametros de la mision\n");
        printf("2. Calcular energia cinetica inicial\n");
        printf("3. Explicar primera ley de Newton\n");
        printf("4. Mostrar reporte final\n");
        printf("0. Salir\n");

        opcion = leer_opcion();

        switch (opcion) {
            case 1:
                mostrar_parametros(mision);
                break;

            case 2:
                mostrar_energia(resultados);
                break;

            case 3:
                explicar_inercia();
                break;

            case 4:
                mostrar_reporte(mision, resultados);
                break;

            case 0:
                printf("\nFinalizando simulador. Hasta luego.\n");
                break;

            default:
                printf("\nOpcion incorrecta. Intente nuevamente.\n");
        }

    } while (opcion != 0);

    return 0;
}