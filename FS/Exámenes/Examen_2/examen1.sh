#!/bin/bash

#Título:		examen1.sh
#Fecha:			02-11-18
#Autor:			Alejandro Becerra Burgos

ayuda1="--ayuda:  muestra  esta  ayuda  por  pantalla"
ayuda2="--grupo:  muestra  el  nombre  y  apellidos,  así  como  el  grupo  del  alumno  que  ha  realizado  el  script,debajo  mostrará  dinámicamente  una  lista  con  los  nombres  de  los  grupos  en  Linux  a  los  que pertenece  el  usuario  que  ejecute  el  script."
ayuda3="--ruta:  se  cambiará  la  variable  directorio_basura  del  script  al  directorio  dado  por  argumento."

if (( $# == 0 || $# > 2 )); then
	echo $ayuda1
	echo $ayuda2
	echo $ayuda3
	mkdir /tmp/trash 2> /dev/null
	directorio_basura=/tmp/trash

elif [ $1 == "--ayuda" ]; then
	echo $ayuda1
	echo $ayuda2
	echo $ayuda3

elif [ $1 == "--grupo" ]; then
	echo "Alejandro Becerra Burgos"
	echo "El alumno pertenece a los grupos: "
	echo "`groups $USER`"

elif [ $1 == "--ruta" ]; then

	if (( $# == 1 )); then
		mkdir /tmp/trash 2> /dev/null
		$2=/tmp/trash
	fi
	
	directorio_basura=$2
	ficheros_modificados=`find $directorio_basura -mtime -5 | wc -l`

	if (( $ficheros_modificados == 0 )); then
		cd /home/$USER
		x=`ls -l $directorio_basura | wc -l`
		y= `find $directorio_basura -mtime -5 | wc -l`
		d=`date`
		echo "Se han leído $x ficheros, $y más recientes de 5 días. No se hace nada ($d)" > tmp.log
	
	else
		YY=`date +%y`
		MM=`date +%m`
		DD=`date +%d`
		cd $directorio_basura
		mkdir TMP-$YY_$MM_$DD 2> /dev/null; echo "va bien"
		chmod goa-rwx,a+rwx TMP-$YY_$MM_$DD; echo "va bien v2"
		mv * TMP-$YY_$MM_$DD 2> /dev/null
		cd /home/$USER
		z=`ls -c $directorio_basura | wc -l`
		c=TMP-$YY_$MM_$DD
		d=`date`
		echo "No hay ficheros recientes. Se han movido $z ficheros a la carpeta $c ($d)" > tmp.log
	
	fi

fi
		
		
	
	



