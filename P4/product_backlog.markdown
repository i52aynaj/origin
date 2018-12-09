## PRODUCT BACKLOG ##

### HISTORIA DE USUARIO 1

### (ANVERSO)

**ID**: 01 **Añadir alumno**

>
Como usuario quiero poder añadir alumnos a la base de datos para guardar su información.
**Prioridad**:1
**Duración**:2 horas


### (REVERSO)

>
* Quiero poder añadir un alumno introduciendo su DNI, nombre, apellidos, fecha de nacimiento, teléfono, email corporativo, dirección y curso más alto.
* A la hora de introducir un alumno, podrá existir otro con el mismo nombre y apellidos, pero DNI y email deben ser únicos para cada alumno.
* No se podrá introducir un alumno si ya existe otro con mismo DNI y/o email.
* Fecha de nacimiento se puede introducir en dígitos o en texto.
* De manera opcional se podrá especificar en que grupo está y si es líder del grupo o no.
* El máximo de alumnos será 150.
* Un mismo equipo no puede tener más de un líder.

### HISTORIA DE USUARIO 2

## (ANVERSO)

**ID**:02 **Guardar backup de los alumnos**

>
Como usuario quiero poder guardar un backup con la información de los alumnos introducidos hasta el momento.
**Prioridad**:2
**Duración**:2 horas

### (REVERSO)

>
* Los ficheros deben ser de tipo binario.

### HISTORIA DE USUARIO 3

### (ANVERSO)

**ID**:03 **Cargar backup de los alumnos**

>
Como usuario quiero poder cargar un backup con la información de los alumnos que haya guardado previamente.
**Prioridad**:3
**Duración**:2 horas

### (REVERSO)

>
* Los ficheros deben existir.
* Los ficheros deben ser de tipo binario.

### HISTORIA DE USUARIO 4

### (ANVERSO)

**ID**:04 **Mostrar alumno**

>
Como usuario quiero poder visualizar los datos de un alumno determinado para poder ver su información.
**Prioridad**:4
**Duración**: 2 horas

### (REVERSO)

>
* El alumno debe existir.
* El alumno a mostrar se podrá buscar por DNI o por apellido y equipo(mínimo).
* Si el alumno es líder de un equipo, se debe destacar visualmente este campo.
* La información del alumno se mostrará por línea de comandos o en un fichero en formato Markdown o HTML.

### HISTORIA DE USUARIO 5

### (ANVERSO)

**ID**:05 **Modificar alumno**

>
Como usuario quiero poder modificar los datos de los alumnos para corregir errores en su información o futuros cambios.
**Prioridad**:5
**Duración**: 2 horas

### (REVERSO)

>
* Al modificar el alumno, se debe asegurar que el DNI y el email siguen siendo únicos y que el grupo al que pertenece tiene como máximo un líder.
* Al modificar el campo "Líder" un grupo, se controlará que el grupo sigue teniendo 0 o 1 líder.

### HISTORIA DE USUARIO 6

### (ANVERSO)

**ID**: 06 **Eliminar alumno**

>
Como usuario deseo tener la posibilidad de eliminar un alumno para eliminar alumnos que ya no están matriculados.
**Prioridad**:6
**Duración**: 2 horas

### (REVERSO)

>
* Eliminar un alumno no tiene impacto en la información del resto de alumnos.
* El alumno a eliminar se podrá buscar por DNI o por apellido y equipo(mínimo).

### HISTORIA DE USUARIO 7

### (ANVERSO)

**ID**: 07 **Mostrar equipo**

>
Como usuario quiero poder visualizar un equipo para conocer quiénes son sus integrantes. **Prioridad**:7
**Duración**: 2 horas

### (REVERSO)

>
* El número mínimo de integrantes de un equipo es 1 y el máximo indefinido.










