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

##DAR SEGUIMIENTO DE BRANCHES REMOTOS
####LOCAL -> REMOTO
1.Cambios en el repositorio local

2.Commit de los cambios

3.Añadir cambios al repositorio remoto:
> `git push`

####REMOTO->LOCAL
1.Sincronización y unión

> `git fech origin`

> `git merge origin/master`

2.En un solo paso
> `git pull

##OPERACIÓN CON BRANCHES REMOTOS
####CREACIÓN
1.Crear branch local

2.Hacer cambios en dicho branch

3.Hacer commit

4.Copiar el branch al repositorio remoto
> `git push -u origin branch_remoto

####COPIA
> `git checkout -b local remoto`

####ELIMINACIÓN
> `git push origin --delete branch_remoto

