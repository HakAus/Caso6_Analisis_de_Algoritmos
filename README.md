# Caso6_Analisis_de_Algoritmos
Algoritmo paralelo en C++ con OpenMP que calcula un ranking de máximos y mínimos de distancia recorrida y velocidad de una animación de una bandada de pájaros en JavaScript elaborada por ekelleyv en GitHub.

INSTRUCCIONES DE USO

Notas Importantes: Este código fue ejecutado usando el compilador g++-10 (Homebrew GCC 10.2.0) 10.2.0
Esta versión tiene soporte completo para OpenMP 4.5 y soporte parcial para OpenMP 5.0

1. Se debe correr el index.html de la carpeta "Flocking" por el tiempo que se desee obtener datos de la simulacion. 
2. En la esquina superior derecha se puede notar un boton "get_data", cuando se quiere obtener la info se presiona ahí. 
3. Para ver la información se debe utilizar un navegador que permita inspeccionar el código de la página, para ello se recomienda el uso de Google Chrome. 
4. Una vez allí se podrá buscar la consola de donde se puede ver la información ya lista en el formato que se utiliza en el programa paralelo en C++ para hacer el ranking.
5. Se copia y pega la estructura en el programa de C++, en la carpeta "RankingGenerator" especificamente en el archivo main.cpp en la línea 105 y se asigna a la variable de tipo vector llamada flockLog.
6. Se compila el programa utilizando el siguiente comando "g++-10 *.cpp -o main -fopenmp"
7. Se ejecuta el programa utilizando el comando ./main
8. Se imprime la información de los pájaros (id, distancia recorrida, velocidad máxima, velocidad mínima, color) el ranking y un objeto de JavaScript listo para ser copiado y pegado en el código de la animación
9. Se copia y pega el objeto de JavaScript en el archivo bird.js de la carpeta "Flocking2" en la primera línea.
10. Se abre el archivo "index.html" de la carpeta "Flocking2" en el navegador.
11. Se comienza a ejecutar la animacion en un modo "automático" en el cual el color se va actualizando conforme cambie la posición del pájaro. Nota importante: Se tiene una espera de 5 segundos antes de ver cualquier cambio para evidenciar que todos los pájaros comienzan con un mismo color base, de lo contrario, los colores se actualizan muy rápido y no se puede apreciar dicho requerimiento.
12. En la esquina superior derecha se tienen algunos botones para poder visualizar mejor los cambios de color ya que en el modo automático varias condiciones pueden suceder al mismo tiempo, por ejemplo que el pájaro haya superado la mayor distancia así como la velocidad máxima, pero solo uno de esos colores se ve por la velocidad de la ejecución de la animación. Estos botones permiten enfocar los cambios ya sea solo en la velocidad o solo la distancia, al presionar uno o el otro los colores se actualizan basados en este criterio.

Elaborado por Austin Hakanson
