# So_long
## Indice

- Consola-Comandos

- Control de Errores


### Consola-Comandos

Comando para Ejecutar el programa haciendo uso de la libreria `MiniLibx` en MacOs

```bash
  gcc -I /path/a/include ft_so_long.c -L/path/a/lib/ -lmlx -framework OpenGL -framework AppKit -o tu_programa
```
#### Como funciona
| Comando | Que hace | Descripcion |
|:------- | :------- | :---------- |
| `gcc` | **Compilador** | Transforma archivos fuente escritos en C (y otros lenguajes compatibles) en código máquina ejecutable.|
| `-I /path/a/include`| **-I** Especifica la ruta **/path/a/include** en el cual añade el header necesario "`mlx.h`"| la opcion **-I** busca en la ruta que des a continuacion  en este caso **/path/a/include**. La ruta puede variar dependiendo donde este instalado la **MiniLibx** |
| `ft_so_long.c` | Nombre del archivo a ejcutar | En este caso el nombre puede variar dependiendo a gusto |
| `-L /path/a/lib/` | **-L** el compilador indica en que directorio(en este caso =>) **/path/a/lib/** buscara la biblioteca con la que trabajara| **-L** seguido de la ruta indica donde se encuentra la biblioteca o para ser mas especificos donde buscarlo lo que define que biblioteca usar es el siguiente comando|
| `-lmxl`|**-l** busca todos los archivos que contengan la palabra **"lib"** seguido del nombre que busques en este caso "**mlx**"| Con el comando anterior se indica donde buscar y con **-l* indicas que biblioteca usar lo que viene despues es el nombre de la biblioteca que usaras en este caso en la ruta `path/a/lib` se encuentra **libmlx.a** (ver la diferencia entre biblioteca estatica y dinamica)|
|`-framwork`| La opción **-framework** en la línea de comandos de gcc es específica de macOS y se utiliza para especificar frameworks de desarrollo de macOS que se deben incluir al compilar y vincular programas.| Solo se utiliza en sistema macOS |
| `OpenGL`| OpenGL es una biblioteca de gráficos 3D utilizada para renderizar gráficos en sistemas macOS. | Al incluir -framework OpenGL, estás indicando al compilador que incluya las bibliotecas y encabezados necesarios para trabajar con OpenGL en tu programa. |
| `AppKit` | AppKit es un framework que proporciona las clases y funciones necesarias para crear la interfaz de usuario de aplicaciones macOS | Al incluir -framework AppKit, estás indicando al compilador que incluya las bibliotecas y encabezados necesarios para trabajar con la interfaz de usuario y los elementos gráficos de macOS en tu programa. |


Go to the project directory

```bash
  cd my-project
```

Install dependencies

```bash
  npm install
```

Start the server

```bash
  npm run start
```


## Control de Errores
    1. El programa debe aceptar como primer argumento un archivo con extencion `.ber`
    2. El mapa debera como minimo un objeto (C), salida (E) y posicion inicial (P)
    3. El mapa solo podra aceptar 5 caracteres, SALIDA (E), COLECCIONABLE (C), POSCICION INICIAL (P), MURO (1) Y ESPACIO VACIO (1).
    4. Mapa debe ser rectangular.
    5. Camino valido en el mapa.
    6. Procesar cualquier tipo de mapa siempre cumpliendo las anteriores normas.
    7. Evitar caracteres duplicados (P, E). 
    8. Si el mapa no esta cerrado/rodeado con muros
*En caso de error mostrar por terminal seguido de un mensaje de tu preferencia*
```Message error por terminal
"ERROR\n"
=> Mapa invalido
=> Numero de argumentos invalidos
=> Mapa no es rectangular
=> Sin camino valido
=> Caracteres duplicados
```
## Objetivos
    1. Mostrar la imagen en una ventana.
    2. Gestion de ventana limpia
    3. Pulsar ESC para cerrar la ventana y el pograma.
    4. Hacer click en la x roja debera terminar con la ventana y el programa
    5. Usar imagenes de la minilibx
    6. Mapa rectangular ejemplo:
```
mapa.ber
1111111111111
10010000000C1
1000011111001
1P0011E000001
1111111111111


mapa2.ber
1111111111111111111111111111111111
1E0000000000000C00000C000000000001
1010010100100000101001000000010101
1010010010101010001001000000010101
1P0000000C00C0000000000000000000C1
1111111111111111111111111111111111

```
    1. Makefile que compile todos los archivos incluyendo los otros Makefiles
    2. Introducir un Mapa como primer arguumento
    3. Movimientos de teclas (W, S, A, D) => (Arriba, Abajo, Izquierda, Derecha)
    4. El jugador no puede atravesar paredes.
    5. Mostrar movimientos en una terminal
    
## Environment Variables

To run this project, you will need to add the following environment variables to your .env file

`API_KEY`

`ANOTHER_API_KEY`


## Makefile

