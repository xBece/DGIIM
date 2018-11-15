#!/bin/bash

#Título:		examen2.sh
#Fecha:			02-11-18
#Autor:			Alejandro Becerra Burgos
#Descripción:		Muestra por pantalla aquellos ficheros del sistema que hayan sido accedidos en #			un número menor de minutos que el dado en el argumento
#Uso:			./examen2.sh minutos
#Opciones:		Elección de los minutos

find / -amin -$1 2> /tmp/errores.txt.


