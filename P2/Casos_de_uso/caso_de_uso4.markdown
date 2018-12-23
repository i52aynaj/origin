### CASO DE USO 4

**Mostrar alumno**

**ID**:04

**Breve descripción**:El sistema mostrará los datos de un usuario.

**Actores principales**:Usuario
**Actores secundarios**:Alumno

**Precondiciones**:

1. El alumno a mostrar debe existir.


**Flujo principal**:

1. El caso de uso empieza cuando el usuario necesita visualizar los datos de un alumno.
2. El usuario selecciona la opción en el menú principal.
3. El sistema da al usuario la opción de elegir el método de búsqueda.
4. El sistema busca al alumno.
5. El alumno será mostrado en la consola o en un fichero, según elija el usuario.

**Postcondiciones**:

* El sistema muestra el alumno en línea de comandos o en un fichero Markdown/HTML.

**Flujos alternativos**:

4.1 Si no existe el alumno, el sistema muestra un mensaje de error y volverá a pedir los datos para buscar el alumno.
4.2 Si existen dos alumnos con los apellidos, el sistema pedirá el DNI para diferenciarlos.
4.3 Si no existe un alumno con los datos dados, el sistema lo indicará y volverá al menú.

