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


