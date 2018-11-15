#!/bin/bash

#Título:		examen1.sh
#Fecha:			01-11-18
#Nombre:		Alejandro Becerra Burgos

ayuda1="Argumentos y funcionamiento del guión:"
ayuda2="--ayuda: muestra esta ayuda por pantalla"
ayuda3="--alumno: muestra el nombre y apellidos, así como el grupo al que pertenece (en el sistema) el alumno que ha realizado el script"
ayuda4="--copy: esta orden realiza una copia de seguridad de backup"

if (( $# == 0 || $# > 2 )); then
	
	echo $ayuda1
	echo $ayuda2
	echo $ayuda3
	echo $ayuda4

elif [ "$1" == "--ayuda" ]; then
	
	echo $ayuda1
	echo $ayuda2
	echo $ayuda3
	echo $ayuda4

elif [ "$1" == "--alumno" ]; then
	
	echo "Alejandro Becerra Burgos"
	echo "Grupo al que pertenece el alumno en el sistema: `groups $USER`"

elif [ "$1" == "--copy" ]; then
	
	if test -d $2 -a ! -h $2; then
	
		echo "El directorio $2 existe y no es un enlace"
		ficheros=`ls -R | wc -l`
		echo "En el directorio hay $ficheros ficheros, ¿ desea hacer copia de seguridad ?" 
		read respuesta
		
		if [[ "$respuesta" == "sí" || "$respuesta" == "si" || "$respuesta" == "yes" || "$respuesta" == "s" || "$respuesta" == "y" ]]; then
		
			cd /tmp
			YY=`date +%y`
			MM=`date +%m`
			DD=`date +%d`
			mkdir backup_$YY_$MM_$DD 2> /dev/null
			if test -d backup_$YY_$MM_$DD; then
				cp -r $2 backup_$YY_$MM_$DD
			else 
				echo "Ha habido un error durante el proceso."
			
			fi
		
		else
			echo "No se va a realizar la copia de seguridad"

		fi

	
	else 
		
		echo "El directorio introducido no existe."
		echo "El directorio debería haber sido `pwd`"

	fi

fi
		
