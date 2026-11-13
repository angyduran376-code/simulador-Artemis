#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"

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
