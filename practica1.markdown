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




## Ramas o branches

Es la forma para separar la línea actual de desarrollo con respecto a la principal. Normalmente representan versiones del software que posteriormente son integradas a la línea principal.

## Comandos Ramas I

### Ver listado de ramas:

> `git branch`

### Crear una rama:

`git branch nombre_rama`

### Cambiarnos a una rama:

> `git checkout nombre_rama`

### Crear una rama y moverse en un paso:

> `git checkout -b nombre_rama`

### Comparar ramas:

> `git diff nombre\_rama..nombre\_rama`

## Comandos Ramas II

### Ver ramas idénticas a la actual:

> `git branch --merged`

### Renombrar ramas:

> `git branch -m nombre\_antiguo nombre\_nuevo`

### Eliminar ramas:

> `git branch -d nombre_rama`

> `git branch -D nombre_rama`

### Integrar ramas a la actual:

> `git merge nombre_rama`

### Resolver conflictos (se suele hacer manualmente):

> `git merge --abort`

## Comandos Ramas III

### Almacenar cambios temporales:

> `git stash save \"Mensaje\"`

### Listar cambios:

> `git stash list`

### Ver contenido de un cambios temporal:

> `git stash show -p nombre\_stash`

### Eliminar un cambio temporal:

> `git stash drop nombre\_stash`

### Aplicar cambio del stash:

> `git stash apply nombre\_stash`

> `git stash pop nombre\_stash`


# **COMANDOS GITHUB 1** *(repositorios)*


1.Añadir repositorio remoto
> `git remote add origin url`

2.Ver repositorios remotos
> `git remote -v`

3.Eliminar repositorio remoto
> `git remote rm origin`

4.Añadir cambios del repositorio local al remoto
> `git push -u origin master`

5.Añadir cambios del repositorio remoto al local
> `git pull`

# **COMANDOS GITHUB 2** *(ramas)*

6.Ver branches remotos
> `git branch -r`

7.Ver todos los braches
> `git branch -a`

8.Clonar un repositorio remoto
> `git clone url`

## DAR SEGUIMIENTO DE BRANCHES REMOTOS

#### LOCAL -> REMOTO

1.Cambios en el repositorio local

2.Commit de los cambios

3.Añadir cambios al repositorio remoto:
> `git push`

#### REMOTO->LOCAL

1.Sincronización y unión

> `git fech origin`

> `git merge origin/master`

2.En un solo paso
> `git pull

## OPERACIÓN CON BRANCHES REMOTOS

#### CREACIÓN

1.Crear branch local

2.Hacer cambios en dicho branch

3.Hacer commit

4.Copiar el branch al repositorio remoto
> `git push -u origin branch_remoto

#### COPIA

> `git checkout -b local remoto`

#### ELIMINACIÓN

> `git push origin --delete branch_remoto

