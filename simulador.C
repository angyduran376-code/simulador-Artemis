
#include <stdio.h>
#include "simulador.h"

void inicializar_mision(Mision *mision)
{
    mision->masa = MASA_ORION;
    mision->velocidad = VELOCIDAD_TLI;
    mision->distancia = DISTANCIA_TIERRA_LUNA;
    mision->altura = ALTURA_LEO;
}

void calcular_resultados(Mision mision, Resultados *resultados)
{
    resultados->energia_cinetica =
        0.5 * mision.masa * mision.velocidad * mision.velocidad;

    resultados->energia_por_unidad_masa =
        resultados->energia_cinetica / mision.masa;
}

void mostrar_parametros(Mision mision)
{
    printf("\n========== PARAMETROS DE LA MISION ==========\n");
    printf("Masa de Orion: %.2f kg\n", mision.masa);
    printf("Velocidad TLI: %.2f m/s\n", mision.velocidad);
    printf("Distancia Tierra-Luna: %.2f m\n", mision.distancia);
    printf("Altura inicial LEO: %.2f m\n", mision.altura);
}

void mostrar_energia(Resultados resultados)
{
    printf("\n========== ENERGIA CINETICA ==========\n");
    printf("Energia cinetica inicial: %.2e Joules\n",
           resultados.energia_cinetica);

    printf("Energia cinetica por unidad de masa: %.2f J/kg\n",
           resultados.energia_por_unidad_masa);
}

void explicar_inercia(void)
{
    printf("\n========== PRIMERA LEY DE NEWTON ==========\n");

    printf("Una vez apagados los motores, Orion continua moviendose\n");
    printf("debido a su inercia. Esto significa que un cuerpo tiende\n");
    printf("a mantener su estado de reposo o movimiento rectilineo\n");
    printf("uniforme si no actua sobre el una fuerza externa neta.\n\n");

    printf("Sin embargo, la gravedad terrestre sigue actuando sobre\n");
    printf("la nave y modifica progresivamente su velocidad y su\n");
    printf("trayectoria durante el viaje translunar.\n");
}

void mostrar_reporte(Mision mision, Resultados resultados)
{
    printf("\n========== REPORTE FINAL ==========\n");

    mostrar_parametros(mision);
    mostrar_energia(resultados);

    printf("\nEstado de la mision: calculo de energia realizado.\n");
    printf("Escenario: Inyeccion Translunar (TLI).\n");
}