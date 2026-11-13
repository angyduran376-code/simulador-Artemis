#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>
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

        /* Comprobar si se completo la lectura de la linea */
        if (strchr(linea, '\n') == NULL && !feof(stdin)) {
            int caracter;

            while ((caracter = getchar()) != '\n' && caracter != EOF) {
                /* Descartar el resto de la entrada */
            }

            printf("Entrada demasiado larga. Intente nuevamente.\n");
            continue;
        }

        errno = 0;
        opcion = strtol(linea, &fin, 10);

        while (*fin == ' ' || *fin == '\t' ||
               *fin == '\n' || *fin == '\r') {
            fin++;
        }

        if (fin != linea &&
            *fin == '\0' &&
            errno != ERANGE &&
            opcion >= INT_MIN &&
            opcion <= INT_MAX) {

            return (int)opcion;
        }

        printf("Entrada invalida. Ingrese un numero entero valido.\n");
    }
}
