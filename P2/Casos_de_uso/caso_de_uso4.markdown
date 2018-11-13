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
2. El sistema muestra los datos del alumno.

**Postcondiciones**:

* El sistema muestra el alumno en línea de comandos o en un fichero Markdown/HTML.

**Flujos alternativos**:

1. Si no existe el alumno, el sistema muestra un mensaje de error y volverá a pedir los datos para buscar el alumno.
2. Si existen dos alumnos con los apellidos, el sistema pedirá el DNI para diferenciarlos.

