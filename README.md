 Simulador de Misión Artemis - Trabajo Final AED

Estructura del Proyecto 
README.md - Documentación general, reglas e instrucciones del proyecto.
README.IA- Registro completo de interacciones y asistencia con IA.
main.c- Punto de entrada del programa y menú interactivo.
simulador.c- Lógica central de la simulación y cálculo de variables.
validaciones.c- Funciones de control y validación de entradas del usuario.
simulador.h Archivo de cabecera con estructuras y prototipos del simulador.
validaciones.h - Archivo de cabecera con prototipos de validaciones.
Comisión: K1.4
Integrantes:
Duran angélica lorena-legajo:14895
Gomez belen milagros- 29479
Colman Maria Rosa- 26720
Fernandez Maria Magali - 28201
Escenario asignado:Inyección Translunar — TLI e Inercia en Trayectoria Libre (1.ª Ley de Newton y Energía)
 El objetivo principal es desarrollar un programa interactivo en lenguaje C que permita simular y analizar diferentes aspectos físicos de la misión Artemis mediante el ingreso de datos por parte del usuario, la validación de los valores ingresados y la realización de cálculos matemáticos. Se busca comprender cómo intervienen las fuerzas gravitatorias, la inercia y la energía en el desplazamiento de la nave Orion.
Reglas del juego y condiciones:
 Regla 1: Parámetros iniciales de combustible, velocidad o tiempo
Regla 2: Condiciones de victoria
Regla 3: Condiciones de derrota o fallo crítico de la misión
Regla 4:Validaciones de datos 
 Funcionamiento
El sistema está desarrollado de forma modular en lenguaje C, separando la interfaz, la lógica de negocio y el control de errores:
Menú principal (`main.c`):** Gestiona el ciclo principal del programa, permite iniciar una nueva simulación, consultar resultados o salir de la aplicación.
Motor de simulación (`simulador.c` / `simulador.h`):** Procesa las decisiones del usuario paso a paso, actualiza el estado de la nave/misión mediante fórmulas físicas o matemáticas y evalúa las condiciones de éxito o fracaso.
Módulo de validaciones (`validaciones.c` / `validaciones.h`):Asegura que todos los datos ingresados por teclado estén dentro de los rangos permitidos, evitando desbordamientos o bloqueos por tipos de datos incorrectos.
Instrucciones de Compilación y Ejecución
 Requisitos previos
 Tener instalado un compilador de lenguaje C, como GCC(MinGW en Windows o build-essential en Linux).
Contar con una terminal de comandos o un entorno de desarrollo como Visual Studio Code o Code::Blocks
Descarga del proyecto
Clonar este repositorio o descargar el archivo `.zip` desde GitHub y extraerlo en una carpeta local:
```bash
git clone https://github.com
cd simulador-Artemis
 Compilación y ejecución desde Terminal (GCC)
Abrir una terminal en la carpeta raíz del proyecto (donde se encuentran los archivos `.c` y `.h`) y ejecutar el siguiente comando para compilar los módulos en conjunto
```bash
gcc main.c simulador.c validaciones.c -o artemis -lm
```
Una vez compilado sin errores, iniciar el programa según el sistema operativo:

En Windows (PowerShell o CMD):
  ```bash
  .\artemis.exe
  ```
En Linux o macOS:
  ```bash
  ./artemis
  ```
Compilación y ejecución desde Code::Blocks
1. Abrir Code::Blocks y crear un nuevo proyecto de consola File > New > Project > Console application > C.
2. Guardar el proyecto en una carpeta local y eliminar el archivo `main.c` que genera por defecto.
3. Agregar todos los archivos del repositorio al proyecto (Project > Add files.): `main.c`, `simulador.c`, `validaciones.c`, `simulador.h` y `validaciones.h` (asegurándose de marcar las opciones Debug y Release).
4. Presionar F9 (o hacer clic en Build and run) para compilar y ejecutar el simulador.
 Registro Detallado del Uso de Inteligencia Artificial
Durante el desarrollo de este trabajo práctico se utilizaron herramientas de Inteligencia Artificial como apoyo técnico y organizativo:
Herramientas utilizadas:  ChatGPT , Gemini
Propósito de uso
Consultas sobre modularización de código en C y manejo de archivos de cabecera (`.h`).
Revisión de sintaxis y depuración de errores de compilación.
Estructuración de la documentación en formato Markdown (`README.md`) y organización del flujo de trabajo en GitHub.
Detalle completo:El registro extenso de prompts y respuestas se encuentra documentado en el archivo adjunto [README.IA](./README.IA).
