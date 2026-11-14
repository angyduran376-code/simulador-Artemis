
/* ===== INICIO DEL ARCHIVO validaciones.c ===== */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include "validaciones.h"

int leer_opcion(void)
{
    char linea[100];
    char *fin;
    long opcion;

    while (1)
    {
        printf("\nIngrese una opcion: ");

        if (fgets(linea, sizeof(linea), stdin) == NULL)
        {
            return 0;
        }

        errno = 0;
        opcion = strtol(linea, &fin, 10);

        /* Ignora espacios y saltos de linea */
        while (*fin == ' ' || *fin == '\t' ||
               *fin == '\n' || *fin == '\r')
        {
            fin++;
        }

        /* Comprueba que se haya ingresado un entero valido */
        if (fin != linea &&
            *fin == '\0' &&
            errno != ERANGE &&
            opcion >= INT_MIN &&
            opcion <= INT_MAX)
        {
            return (int)opcion;
        }

        printf("Entrada invalida. Ingrese un numero entero.\n");
    }
}

/* ===== FIN DEL ARCHIVO validaciones.c ===== */
