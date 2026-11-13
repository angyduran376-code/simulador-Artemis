#ifndef SIMULADOR_H
#define SIMULADOR_H

/* Datos físicos de la misión */
#define MASA_ORION 26000.0
#define VELOCIDAD_TLI 10900.0
#define DISTANCIA_TIERRA_LUNA 384000000.0
#define ALTURA_LEO 192000.0

/* Constantes terrestres indicadas en el Problema 2 */
#define G 6.674e-11
#define MASA_TIERRA 5.972e24
#define MASA_LUNA 7.346e22
#define RADIO_TIERRA 6371000.0

/* Estructuras de datos */
typedef struct {
    double masa;
    double velocidad;
    double distancia;
    double altura;
} Mision;

typedef struct {
    double energia_cinetica;
    double energia_por_unidad_masa;
    double distancia_equilibrio;
    double trabajo_potencial_por_unidad_masa;
    double trabajo_adicional_por_unidad_masa;
} Resultados;

/* Prototipos de funciones */
void inicializar_mision(Mision *mision);
void calcular_resultados(Mision mision, Resultados *resultados);
void mostrar_parametros(Mision mision);
void mostrar_energia(Resultados resultados);
void explicar_inercia(void);
void mostrar_reporte(Mision mision, Resultados resultados);

#endif
