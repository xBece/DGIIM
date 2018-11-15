#!/bin/bash

#Título:		examen2.sh
#Autor:			Alejandro Becerra Burgos
#Fecha:			02-11-18
#Descripción:		Muestra por pantalla las palabras que empiecen por mayúscula del fichero pasado #			como primer argumento e indica el número de palabras encontradas y el número de #			palabras totales del fichero
#Uso:			./examen2.sh fichero_a_examinar
#Opciones:		Elección del fichero

# Para moverlo al directorio /tmp/trash con rm en lugar de borrarlo podemos asignarle un alias de la siguiente forma:
# alias rm='mv $@ /tmp/trash'

echo "La palabras que empiezan por mayúsculas son : `egrep ^[A-Z] $1`"
echo "Hay en total `egrep [^A-Z] $1 | wc -w` palabras que empiezan por mayúsculas"
echo "El total de palabras contenidas en $1 es de `cat $1 | wc -w`"


