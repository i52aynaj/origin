## **Git y GitHub**

### Git:

Sistema para el control distribuido de versiones de código. Fundamentalmente permite dar seguimiento a cambios realizados sobre un archivo y almacenar una copia de los cambios.

### GitHub

Sitio web donde podemos ubir una copia de nuestro repositorio Git.

## **Ventajas:**

### Git:

	-Habilidad de deshacer cambios.
	-Historial y documentacion de cambios.
	-Múltiples versiones de codigo.
	-Habilidad de resolver conflictos entre versiones de distintos programadores.
	-Copias independientes.

### GitHub

	-Documentación de requerimientos.
	-ver el avance del desarrollo.

## **Instalación**

	-Para instalar Git: htttp://git-scm.com.
	-En el curso se utilizara Git a traves de lineas de comandos.
	-Para eclipse exiten plugins integrados: https://www.eclipse.org/egit.


## **Configuracion Básica**

### Nombre de administrador

>`git config --global user.name "Enrique Galan Galan"`

### Correo electronico

>`git config --global user.email i62gagae@uco.es`

### Editor de texto

>`git config --global core.editor "gedit"`

### Color de la interfaz

>`git config --global color.ui true`

### Listado de la configuracion

>`git config --list`

### Iniciar repositorio en un directorio

>`git init`

### Agregar cambios al area de staging

>`git add`

### Validar cambios en el repositorio

>`git commit -m "Mensaje"`

### Hacer los dos pasos anteriosores en uno

>`git commit -am "Mensaje"`

### Historial de commit

>`git log`

### Ayuda del listado anterior

>`git help log`

### Listar los 5 commit mas recientes

>`git log -n 5`

### Listar los commit desde una fecha

>`git log --since=2018-09-18`

### Listar los commit por autor

>`git log --author="Antonio"`

### Ver cambios en el directorio

>`git status`

### Ver diferencia entre fichero en el directorio y el repositorio de git:

>`git diff`

### Ver diferencia entre  cheros en el staging y el repositorio:

>`git diff --staged`

### Eliminar archivos

>`git rm archivo`

>`git commit -m "Mensaje"`

### Mover o renombrar archivos

>`git mv antiguo nuevo`

>`git commit -m "Mensaje"`

### Deshacer cambios con git:

>`git checkout -- nombre_fichero`

### Retirar archivos del staging:

>`git reset HEAD nombre_fichero`

### Complemetar ultimo commit

>`git commit --amend -m "Mensaje"`

### Recuperar versionj de un fichero de commit antiguo:

>`git checkout <id_commit> --nombre_archivo`

### Revertir un commit:

> `git revert <id_commit>`

### Deshacer multiples cambios en el repositorio

> `git reset --spft <id_commit>`
> `git reset --mixed <id_commit>`
> `git reset --hard <id_commit>`

### Listar archivos que git no controla:

> `git clean -n`

### Eliminar archivos que git no contorla:
> `git clean -f`

### IGnorar archivos en el repositorio: .gitignore

### Listar el contenido del repositorio de git:

> `git ls-tree master`
> `git ls-tree master^^^`
> `git ls-tree master^3`

### Log en una linea:

> `git log --oneline`

### Log con los tres ultimos commits en una linea:

> `git log --oneline -3`

### Examinar el contenido de un commit:

> `git show <id>`

### Comparar un commit con el actual:

> `git diff <id> nombre_archivo`

### Comparar dos commit

> `git diff id..id nombre_archivo`




